#   Author: Sebastian Matthews
#   Tower of Hanoi
#   Mar 27, 2022
#   Gonzaga University
#   This program runs a game of Tower of Hanoi, where a player has to move a tower of discs from one peg to another following three simple rules...
#       1. Only one disc may be moved at a time.
#       2. Each move consists of taking the upper disc from the top of any given stack and either placing it on a stack or an empty rod.
#       3. No disc may be placed on top of a disk smaller than it.
#   Such a game demonstrates a property of complexity where a diagram of all possible moves display a Sierpinski triangle(with a Hamiltonian path 
#   connecting every option), the minimal complexity of the problem being O(2^n - 1) moves, with "n" being the number of discs. How profound!

# A few imports, so that the game can run.
import numpy as np
from random import randint
from os import system
from time import sleep

# Upon program start-up...
system('clear')
numDiscs = int(input('Tower of Hanoi!\n' +
                     'The goal of the game is to move the entire stack of discs(called the "tower") to a position that differs from its start.\n' + 
                     'Enter number of discs for the tower.\n'))

if numDiscs < 3 or numDiscs > 10:
    print('Invalid number of discs.')
    exit()
else:
    system('clear')  

discBoard = np.full((numDiscs, 3), '-')

randPos = randint(0, 2)

# This function places our tower in a random location, to provide some challenge in getting an "optimal solve"; games would be boring if each run was the same!
# The initial position doesn't change the number of optimal moves, so we can safely vary each instance.
def placeTower():
    for i in range((numDiscs - 1), -1, -1): # From the bottom, we stack the discs up, with (n - 1) being the value on the bottom of the tower.
        discBoard[i][randPos] = i

# This function lets a player move a disc from where it was to another one, without breaking the 3 aforementioned rules of Tower of Hanoi.
def moveDisc(pos, disc):
    for i in range((numDiscs - 1), -1, -1): 
        if(discBoard[i][pos] == '-'):
            if((i < (numDiscs - 1)) and disc > int(discBoard[i + 1][pos])): # Prevents a disc from stacking onto one with a lesser value than it, 
                                                                            # meaning that its initial position on the tower is above the disc being
                                                                            # placed on top of it; Rule 3 of Tower of Hanoi.
                print('Move invalid.')   
                sleep(1)
                break  
            elif((i < (numDiscs - 1)) and discBoard[i + 1][pos] == str(disc)): # Prevents a disc from stacking on top of itself, suspending it in the air.
                                                                               # This would be the law of gravity.
                print('Move invalid.') 
                sleep(1)
                break 
            else:
                removeDisc(disc) # Unload our last disc...
                discBoard[i][pos] = disc # ...and place the new one in the player's desired spot.
                break

# This function removes a disc once it has been moved from its inital position, since it's called before the new disc position is loaded.
def removeDisc(disc):
    for i in range(numDiscs): # Technically, these loops clear the entire board of every selected disk instance, 
                              # but we only use it before we move our disk of choice.
        for j in range(3):
            if(discBoard[i][j] == str(disc)):
                discBoard[i][j] = '-'

# This function checks if we won the game, meaning that we moved the tower to a different peg than its start.
def checkWin():
    count = 0
    for i in range((numDiscs - 1), -1, -1): # (n - 1) -> 0
        for j in range(3):
            if(discBoard[i][j] == str(i) and j != randPos): # We count the discs from the bottom, from largest to smallest while not on the starting peg...
                count += 1 # ...and we count it towards a victory.
                if(count == numDiscs):
                    print('You win!')
                    exit()

# This function checks if our move is valid; i.e. the disk that we want is not under another disc, being Rule 2 of Tower of Hanoi.
def checkValid(disc):
    for i in range(numDiscs):
        for j in range(3):
            if(discBoard[0][j] == str(disc)):
                return True
            elif(discBoard[i][j] == str(disc) and discBoard[i - 1][j] != '-'):
                return False    
    return True

def main():
    placeTower() # Set our tower down...
    print(discBoard) # ...and show the user.
    
    while True: # This manages the game loop.
        disc = int(input('Enter a disc to move.\n')) # Pick a disk.
        if(checkValid(disc)): # We see if it's alright.
            pos = int(input('Now, enter a valid position to move the disc.\n'))
            moveDisc(pos, disc)
        else: 
            print('Disk choice invalid.')
            sleep(1)
        system('clear')
        print(discBoard)
        checkWin() # Check for a winning position after each move.


main()