#   Author: Sebastian Matthews
#   CPSC 215 PA5: Mad Lib Generator
#   Feb 27, 2022
#   Gonzaga University
#   This program has the user list out a series of words, where segments of the input file will be replaced with their chosen words.

from os import system # For clearing the terminal.
inFile = open('lib_input.txt', 'r') # We access the input file in read mode in order to make the mad lib.

# First, we have the user enter everything.
personName1 = input('Enter a name of a person.\n')
personName2 = input('Enter another name of a different person.\n')
timeLength = input('Enter a length of time with units.\n')
length = input('Enter a length with units.\n')
dist = input('Enter a distance with units.\n')
speed = input('Enter a speed with units.\n')
adjective = input('Enter an adjective.\n')
erAdjective = input('Enter an adjective ending in \"er\".\n')
adverb = input('Enter an adverb.\n')
verb = input('Enter a verb.\n')
noun = input('Enter a noun.\n')
number = input('Enter a number.\n')
animal = input('Enter an animal.\n')
animalType = input('Enter a type of animal.\n')
place = input('Enter a place.\n')
userName = input('Finally, enter your full name.\n')

# This function builds the mad-lib, creating the output file and writing to it.
def constructLib():
    system('clear')
    outFile = open('lib_output.txt', 'w')
    outFile.write('Jurassic ' + place + ', by ' + userName + '\n\n')

    for line in inFile: # As we read the file...
        outFile.write(line.replace('\n', ' ') # ...replace each instance of a placeholder with the user's input.
            .replace('NAME OF PERSON 1', personName1)
            .replace('NAME OF PERSON 2', personName2)
            .replace('ADJECTIVE ENDING IN -ER', erAdjective)
            .replace('LENGTH OF TIME WITH UNITS', timeLength)
            .replace('DISTANCE WITH UNITS', dist)
            .replace('LENGTH WITH UNITS', length)
            .replace('SPEED WITH UNITS', speed)
            .replace('TYPE OF ANIMAL', animalType)
            .replace('ADJECTIVE', adjective)
            .replace('ADVERB', adverb)
            .replace('ANIMAL', animal)
            .replace('VERB', verb)
            .replace('NOUN', noun)
            .replace('NUMBER', number)
            .replace('PLACE', place)) 
    
    # After we're done with replacing everything, we close our files.
    inFile.close()
    outFile.close()

# The function below reads the contents of the output file back to the user.
def readLib():
    inFile = open('lib_output.txt', 'r')
    print(inFile.read())
    inFile.close()

def main():
    constructLib() # Fill in all the words for our mad lib...
    readLib() # ...and then read it out to the user.

main()