# Exam project 3 - Pizza Universe 
# Below, four classes are defined, the Pizza, Order, BakingQueue, and Oven class
# The BakingQueue and Oven classes are complete, but the other classes need some methods filled in
# Then, below all class definitions, there are a few functions that need to be completed to run the restaurant
# NOTE: I recommend beginning by instantiating your Oven and BakingQueue in the pizzaUniverse() function at the bottom

from os import system
import random
import time #sleep()


###########################################################
#15 pts
class Pizza:
    def __init__(self, size):
        self.size = size
        self.maxToppings = 6
        self.toppings = []
        print("Making a pizza!")


    ### COMPLETE THIS METHOD:
    def addTopping(self):
        # ask the user what topping they want to add if maxToppings have not been reached
        # add the chosen toppings to this pizza's toppings list
        topTotal = 0
    
        while(topTotal < self.maxToppings):
            system('clear')
            self.displayToppings()
            curTop = input('What toppings would you like to add? Please enter one topping. You can have a maximum of 6.\nIf you would like to not add any more toppings, type \"exit\".\n')
            if(curTop == 'exit'):
                break
            self.toppings.append(curTop)
            topTotal += 1
            
    ### MODIFY THIS METHOD AS DESIRED...
    def displayToppings(self):
        print("Our toppings are:\nPineapple\nPepperoni\nMushrooms\nSpinach\nSausage")

##############################################################
#25 pts
class Order:
    def __init__(self, num, mode):
        self.delivery = mode #delivery or carryout
        self.pizzas = []   # initialized with an empty list of Pizza objects
        self.orderNum = num  #order number
        self.totalCost = 0  #cost of order
        print("Order received! Your order number is", str(self.orderNum) + '.')
      

    ### COMPLETE THIS METHOD:
    def addPizza(self):
        # ask the customer what size pizza they want, s/m/l
        size = input('What size of pizza would you like? Enter s/m/l accordingly.\n')

        # instantiate a Pizza object with the chosen size
        newPizza = Pizza(size)
        # depending on size, add a base cost to this order's totalCost
        
        if size == 's':
            self.totalCost += 6
        elif size == 'm':
            self.totalCost += 8
        elif size == 'l':
            self.totalCost += 10
        else:
            print('Invalid size.')

        # get the toppings for the pizza while the customer wants to add more toppings, using the Pizza object's addTopping() method
        newPizza.addTopping()
        # update this order's totalCost for each additional topping
        for topping in newPizza.toppings:
            self.totalCost += 2
        # when toppings complete, add (append) this pizza to this order's list of pizzas
        self.pizzas.append(newPizza)
        print('Your order now costs: $' + str(self.totalCost) + '.')


#######################################################

#This class is complete, but you are free to modify if you wish

class BakingQueue:
    def __init__(self):
        self.queue = []     # bakingQueue object initialized with zero pizzas to bake
        print("No pizzas to bake yet!")

    # this method appends a Pizza object to the end of the baking queue
    def addToQueue(self, pizza):
        self.queue.append(pizza)

    # this method removes the pizza object at the front of the baking queue    
    def removeFromQueue(self):
        return self.queue.pop(0)
        

####################################################################

#This class is complete, but you are free to modify if you wish

class Oven:
    def __init__(self):
        self.numPizzas = 0    # oven object initialized with zero pizzas
        self.maxPizzas = 6    # an oven object can only hold six pizzas at a time
        self.racksFull = []   # initialized with no occupied oven racks
        print("The oven has been turned on!")   # a msg that prints when the oven is constructed

    # this method changes an oven rack to occupied and sets it to 5 time units of bake time
    # (each time a pizza is added to the oven, it takes 5 time units to bake, hence the append 5)
    def putInPizza(self):
        self.racksFull.append(5)
        self.numPizzas += 1
        print("Pizza going in the oven!")

    # this method receives the bakingQueue object and puts pizzas in the oven as there is room
    # it also reduces the remaining bake time on all pizzas in the oven
    def bake(self, queue: BakingQueue):
        while(self.numPizzas < self.maxPizzas and len(queue.queue) > 0): # while there is room in oven and more pizzas in queue
            self.putInPizza()  # put a pizza in the oven
            queue.removeFromQueue()  # take a pizza out of the queue
        for rack in range(len(self.racksFull)):  # for each oven rack that has a pizza on it
            self.racksFull[rack] -= 1  #every rack has one less time unit left to complete baking
        print("Current bake times of pizzas in oven: ", self.racksFull)

        if (len(self.racksFull) > 0):   # if there are pizzas in the oven
            while (self.racksFull[0] == 0): # while the pizza that has been in the oven the longest (front of queue) has zero units left to bake
                print ("Pizza coming out of oven!")
                self.racksFull.pop(0)  #remove the finished pizza from the oven
                if (len(self.racksFull) ==  0):   # if the oven is empty, break (to avoid access error)
                    break
        else:
            print("Oven empty!")

#########################################################


### COMPLETE THIS FUNCTION - 25 pts
# this function receives an order number (an integer) and returns an Order object
def takeOrder(num):
    print("Welcome to Pizza Universe!")
    ### find out if the order is delivery or carryout
    randOrder = random.randint(0,1)
    if randOrder == 0:
        randOrder = 'delivery'
    else:
        randOrder = 'carryout'
    print('Order #' + str(num), 'is ' + randOrder + '.')
    ### then instantiate an Order object using the order num that came into this function
    ###       as well as the delivery mode the customer indicated
    curOrder = Order(num, randOrder)
    keepOrder = True

    ### while the customer wants to add more pizzas to the order, continue to call the Order object's addPizza() method 
    while keepOrder:
        morePizzas = input('Would you like to add a pizza to your order? Enter \"y\" or \"n\".\n')
        if morePizzas == 'y':
            curOrder.addPizza()
        else:
            keepOrder = False
    ### return the Order object from the function
    return curOrder
  

### COMPLETE THIS FUNCTION - 15 pts
# this function receives an Order object and the BakingQueue object, no return
def prepareOrder(order: Order, queue: BakingQueue):
    ### add each of the pizzas in the Order object received to the BakingQueue object received
    for pizza in order.pizzas:
        queue.addToQueue(pizza)


### COMPLETE THIS FUNCTION - 25 pts
# main restaurant loop
def pizzaUniverse():
    orderNum = 100  # the first customer of the day will have this order number
    ### COMPLETE THIS: instantiate an oven object and name its instance theOven
    theOven = Oven()
    ### COMPLETE THIS: instantiate a BakingQueue object and name its instance toBeBaked
    toBeBaked = BakingQueue()
    shoptime = 0
    shoprev = 0

    while(shoptime < 10):   ### adjust this value to keep your store open for fewer or more time units
        system('clear')
        print("Shop time: ", shoptime)
        theOven.bake(toBeBaked)  # bake the pizzas (adds pizzas when oven has room and deducts a baking time unit from each pizza - see Oven class)
        if (random.randint(1,10) < 5):  # randomly determine if a customer initiates an order
            print("We have a customer!")
            order = takeOrder(orderNum) # the takeOrder() function will return an Order object
            orderNum += 1 # increment the orderNum for the next customer
            prepareOrder(order, toBeBaked)  # send the Order object and the baking queue to the prepareOrder function
            ### COMPLETE THIS: keep a running total of Pizza Universe's total revenue for the day, and report at close of business
            shoprev += order.totalCost

        else:
            print("Waiting for an order...")
        shoptime += 1
        time.sleep(1)

    print("Pizza Universe is closing for the day, no new orders.\nOur total revenue for the day is:", shoprev)

    ### COMPLETE THIS: make sure to finish baking the rest of the pizzas til the oven is empty!
    while len(theOven.racksFull) > 0:
        theOven.bake(toBeBaked) 
    print('No pizzas left in the oven!')
    

pizzaUniverse()