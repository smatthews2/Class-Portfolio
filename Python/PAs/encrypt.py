#   Author: Sebastian Matthews
#   CPSC 215 PA7: Scramble and Encrypt
#   Mar 27, 2022
#   Gonzaga University
#   This program has the user choose whether to scramble or encrypt an entered word, presenting the output of the operation.

import sys
from random import randint

# This function encrypts a given string via a Caesar shift method.
def encrypt(string: str):
    newStr = string
    key = 3

    for ch in string:
        newStr = newStr.replace(ch, chr(ord(ch) + key)) # Shift a character by a given amount of positions on the ASCII table.

    return newStr
        
# This function mixes up a string's characters into a random order.
def scramble(string: str):
    
    newStr = list(string) # We have to cast the new string as a list, since we can't assign chars in a string manually.
    last = len(string) - 1

    while last > 0:
        rand = randint(0, last) # Pick a random index.
        newStr[last], newStr[rand] = newStr[rand], newStr[last] # Swap the positions of the last index and said random index.
        last -= 1 # Iterate.
    
    string = ''.join(newStr) # Place our list into the string object after we mixed up everything.
    
    return string


def main(argv):
    # The "try-except" structure catches errors made by the user, telling them what they did wrong in plain English rather than a scary error message.
    try:
        if(argv[1] == 'encrypt'):
            print(encrypt(argv[2]))    
        elif(argv[1] == 'scramble'):
            print(scramble(argv[2]))
        else:
            print('Invalid command.')
    except IndexError:
        print('Invalid number of arguments.')

main(sys.argv)