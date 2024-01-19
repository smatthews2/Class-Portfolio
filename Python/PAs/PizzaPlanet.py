## CPSC 215 Spring 2022 exam 1 - 2/11/2022 - Pizza Planet ordering application
## You may work with a partner to write the indicated functions to get this application running 
## In each function, replace 'pass' with the body of the function that you write and add parameters as appropriate
## EACH PERSON SHOULD SUBMIT THEIR OWN COPY OF THE .PY FILE FOR GRADING PURPOSES
## Author #1: Sebastian Matthews
## Author #2: Caleb Lefcort

from os import system
from time import sleep

## 10 points - This function prompts the user to enter their first name, last name, and phone num, each stored in a separate variable.
## Input: none
## Return: the user's firstname, lastname, phone as a tuple of strings
def getCustomerInfo():
    firstName = input('Please enter your first name.\n')
    lastName = input('Now, enter last name.\n')
    phoneNum = int(input('Finally, please enter your phone number.\n'))
    
    return firstName, lastName, phoneNum

## 15 points - This function prompts the user to say what topping type they would like added WHILE they haven't reached the total num toppings
## It starts with a base pizza cost of $10 then adds $2.50 for each additional topping
## Input: number of toppings
## Return: total cost of this pizza
def createPizza(numTop):
    topTotal = 0
    
    while(topTotal < numTop):
        curTop = input('What toppings would you like to add? Please enter one topping. You can have a maximum of 4.\nIf you would like to not add any more toppings, type \"exit\".\n')
        if(curTop == 'exit'):
            break
        topTotal += 1
    totalCost = 10 + (2.50 * topTotal)
    
    return totalCost

## 5 points - This function displays the toppings your store offers
## Input: none
## Return: none
def displayToppingList():
    system('clear')
    print('\tToppings list:\nPineapple\nPepperoni\nMushrooms\nSpinach\nSausage')
    sleep(1)

## 10 points - This function displays the total order cost and a msg that uses the customer's first and last name
## Input: first name, last name, order total amount
## Return: none
def displayOrderTotal(firstName, lastName, orderTotal):
    print(firstName, lastName + '\'s Total: $' + orderTotal)

## 10 points - This function displays the menu options to the user (see pdf document) and prompts the user for their choice
## Input: none
## Return: user choice number
def displayOrderMenu():
    system('clear')
    print('\tMenu:\n1. Display Topping List\n2. Add a Pizza\n3. Complete Order')
    userChoice = int(input('What would you like to do? Input number.\n'))
    return userChoice

## 15 points
def main():
    print('Welcome to Pizza Planet!')
    ## Initialize the order total to $0
    orderTotal = 0
    completeOrder = False
    ## Get the customer's name and phone info with the getCustomerInfo() function
    ## e.g. first, last, phone = getCustomerInfo()
    first, last, phone = getCustomerInfo()
    
    ## Show the customer the Order Menu WHILE they haven't selected the 'complete order' option
    ## IF they chose 'display topping list' use the displayToppingList() function
    ## IF they chose 'add a pizza' , ask them how many toppings and then use the createPizza() function
    ## Be sure to add to their order total each time you use the createPizza() function
    while(completeOrder == False):
        userChoice = displayOrderMenu()
        if(userChoice == 1):
            displayToppingList()
        if(userChoice == 2):
            orderTotal += createPizza(4)
        if(userChoice == 3):
            completeOrder = True
            
    displayOrderTotal(first, last, str(orderTotal))

    ## Once the customer has selected 'complete order', use the displayOrderTotal() function

main()
