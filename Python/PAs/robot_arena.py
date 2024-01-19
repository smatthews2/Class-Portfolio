### Complete this file to implement the Robot Arena game

#   Author: Sebastian Matthews
#   CPSC 215 PA4: Robot Arena
#   Feb 7, 2022
#   Gonzaga University
#   This program has two users name a pair of robots and fight each other.
#   Each user has the option to attack or repair their robot once their turn commences.
#   Once one of the robots has no health left, a winner is declared, along with how many turns the game was.
   
from os import system  # for system("clear") or system("cls")
from random import randint
from time import sleep

#declare a global 'constant' for maximum health
MAX_HP = 20

# This function accepts no arguments
# It returns the amount of health points to be gained back
def repairDamage():
    # Randomly generate an integer between 2 and 5 
    # Return the number you've generated
    return randint(2, 5)
    


# This function accepts the name of the robot who is currently attacking
# It returns the amount of damage the attack does
def attack(robot):
    # prompt the attacking robot (use the name passed into this function) to enter which attack type as a character (e.g. A, B, C..)
    # use an if statement (or other ..) to execute the chosen attack type
    # the amount of damage done should be generated randomly and the range should vary by attack type
    # return the amount of damage done
    print(robot, 'is attacking!')
    attackType = input('What attack would you like to use? Input A, B, or C.\n')
    
    if(attackType == 'A'):
        return randint(1, 2)    
    elif(attackType == 'B'):
        return randint(2, 6)
    elif(attackType == 'C'):
        return randint(1, 10)
    else:
        print('Invalid input; attack cancelled.')
        sleep(1)
        return 0
        
# This function accepts the winning robot's name. No return
def declareWinner(robot, turns):
    # print a message that the robot who was passed into this function is the winner
    print('Congratulations, ' + robot + '. You won in', turns ,'turns!')

# This function accepts the number of the player who is choosing their name, 1 or 2
# It returns the chosen name.
def nameRobot(num):
    # prompt the robot whose number was passed in to enter their player name 
    # return the chosen name
    print('Player', num, end=', ')
    robotName = input('enter a name for your robot.\n')
    return robotName


# This function takes the names of the two robot opponents and controls the main game flow. No return.
def spar(robot1, robot2):

    system('clear')
    sleep(1)
    print( "\tReady?...", flush = True, end = ' ')
    sleep(1)
    print( "Spar!")
    sleep(1)
    
    # start both players with the global constant maximum health you defined at the top
    robot1HP = robot2HP = MAX_HP
    gameTurn = 0

    while(robot1HP > 0 and robot2HP > 0):
    # WHILE both players have >0 health:
        #display both players' health points
        system('clear')
        print(robot1 + '\'s HP:', robot1HP, '\n' + robot2 + '\'s HP:', robot2HP,'\n')
        #give robot 1 a turn
            #robot 1 chooses to attack or repair
            #if they attack, reduce robot 2 health points using the attack() function
            #if they repair, increase robot 1 health points using the repairDamage() function
        if(gameTurn % 2 == 0):
            print(robot1 + '\'s turn.')
            actionToTake = input('What would you like to do? Input \"attack\" or \"repair\".\n')
            if(actionToTake == 'attack'):
                robot2HP -= attack(robot1)
            elif(actionToTake == 'repair'):
                robot1HP += repairDamage()
            else:
                print('Invalid input; turn skipped.')
            gameTurn += 1
        #assuming robot2 is not out of points, give robot 2 a turn
            #robot 2 chooses to attack or repair
            #if they attack, reduce robot 1 health points using the attack() function
            #if they repair, increase robot 2 health points using the repairDamage() function
        if(gameTurn % 2 == 1):
            print(robot2 + '\'s turn.')
            actionToTake = input('What would you like to do? Input \"attack\" or \"repair\".\n')
            if(actionToTake == 'attack'):
                robot1HP -= attack(robot2)
            elif(actionToTake == 'repair'):
                robot2HP += repairDamage()
            else:
                print('Invalid input; turn skipped.')
                sleep(1)
            gameTurn += 1
        #if either of the robots is out of points, use the declareWinner() function and exit the loop
        if(robot1HP <= 0 and robot2HP <= 0):
            system('clear')
            print(robot1 + '\'s HP:', robot1HP, '\n' + robot2 + '\'s HP:', robot2HP,'\n')
            print('Both robots defeated! No winner!')
        elif(robot1HP <= 0):
            system('clear')
            print(robot1 + '\'s HP:', robot1HP, '\n' + robot2 + '\'s HP:', robot2HP,'\n')
            declareWinner(robot2, gameTurn)
        else:
            system('clear')
            print(robot1 + '\'s HP:', robot1HP, '\n' + robot2 + '\'s HP:', robot2HP,'\n')
            declareWinner(robot1, gameTurn)

    #end spar function
    return 0


def main():

    print( "Welcome to Robot Arena!!!\n\n")

    #let both players choosed their robot name
    robot1 = nameRobot(1)
    robot2 = nameRobot(2)
    
    #begin the battle
    spar(robot1, robot2)

main()