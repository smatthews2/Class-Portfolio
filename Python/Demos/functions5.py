#   Author: Jo Crandall
#   CPSC 215 Function basics 5
#   February 2022
#   Gonzaga University
#   This program demonstrates modularization, functions that work together across multiple files.

## Our main python file will contain import statements to connect to the functions we write in other files

## Here are three different options for importing our compTuition module
#from compTuition import *        ## The * means "everything" or "anything"
#from compTuition import compTuition
import compTuition as ct

#import compHousing as ch

def main():

    credits = int(input('Please enter number of credits: \n'))
    status = input('Are you in-state (y/n)? \n')
    if (status == 'y'):
        tuition = ct.compTuition(credits, True)
    else:
        tuition = ct.compTuition(credits, False)

    print('Tuition cost: ' + str(tuition))            ## str(var)
    #ct.anotherFunction()


main()