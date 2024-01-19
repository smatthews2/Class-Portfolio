#   Author: Sebastian Matthews
#   CPSC 215 PA3: Guess the Mystery Number
#   Feb 7, 2022
#   Gonzaga University
#   This program has the user guess what a randomly-generated integer is, 
#   providing the user with three guesses before telling them what the number was.

from random import randint # We only need randint() from the random library.

# This function takes a number and determines whether it's even or odd.
def evenOrOdd(int):
    if(int % 2 == 0):
        print('your number is even.')
    else:
        print('your number is odd.')

# This function takes a number and doubles it.
def doubleNum(int):
    int *= 2
    print('your number doubled is', int, end='.\n')

# This function takes in a number and subtracts it by three.
def numMinusThree(int):
    int -= 3
    print('your number minus three is,', int, end='.\n')

randNum = randint(1, 20) # Apply a random value to the number that we're trying to guess.

def main():
    print('Here is your first hint,', end=' ')
    evenOrOdd(randNum) # Tell the user if their number is even or odd.
    userNum = int(input('Input number.\n'))
    if(userNum == randNum):
        print('Correct! The mystery number was', randNum, end='.\n')
    else:
        print('Incorrect! Here is your next hint,', end=' ')
        doubleNum(randNum) # Tell the user what their number doubled is.
        userNum = int(input('Input number.\n'))
        if(userNum == randNum):
            print('Correct! The mystery number was', randNum, end='.\n')
        else:
            print('Incorrect! Here is your final hint,', end=' ')
            numMinusThree(randNum) # Tell the user what their number minus three is.
            userNum = int(input('Input number.\n'))
            if(userNum == randNum):
                print('Correct! The mystery number was', randNum, end='.\n')
            else:
                print('Incorrect! The mystery number was', randNum, end='.\n')


main() # Like any other function, we have to call main.