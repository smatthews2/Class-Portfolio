#   Author: Jo Crandall
#   CPSC 215 Conditionals - Logical Expressions
#   Jan 31, 2022
#   Gonzaga University
#   This program demonstrates user menu, logical expressions

from os import system      ## for system('clear')
from time import sleep     ## for sleep()

## User Menu Example
## banking application - display user menu

## we might like to start the user interface with a clear screen
#system('clear')       ## on Windows,  system('cls')

## notice the formatting choices
# print( "\n\n---Banking Application Options---\n\n" )
# print( "\t1. Deposit\n", "\t2. Withdrawal\n", "\t3. Check Balance\n" + \
#     "\t4. ...\n" )

## we can purposefully slow things down so the user has time to process
#sleep(1)

# userOption = int(input( "Enter your choice: " ))                     ## Be careful of user input....
## What will the user enter????

# if (userOption == 1):
#     print( "Let's make that deposit!\n" )


## Logical Expressions Example: we can combine logical expressions to make compound conditional expressions
## banking application - check user account status

userBal = 1200
userType = 'Corporate'
#userType = 'Private'

# if (userBal < 0 and userType != "Corporate"):
#     print( "Send negative balance notice.\n" )

# if (userBal < 5000 and userType == "Corporate"):
#     print( "Send low corporate account notice.\n" )



## what takes operator precedence??

# print(False and False or True)
# print(False and (False or True))

## putting compound logical comparisons in parentheses can be very important for clarity!

# if (userBal < 25 and userType != "Corporate" or userBal < 5000 and userType == "Corporate"):
#     print( "Send Low Balance notice.\n")


