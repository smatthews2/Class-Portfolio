#   Author: Jo Crandall
#   CPSC 215 Loops - while loops
#   Feb 2, 2022
#   Gonzaga University
#   This program demonstrates while loops

## The basic while loop structure:

## Lifeguard certification example:
trainingHours = 15
# while (trainingHours < 50):
#     print( 50 - trainingHours, " hour(s) still required for certification.\n" )
## What's happening here? How can we fix it?

# while (trainingHours < 50):
#     print( 50 - trainingHours, " hour(s) still required for certification.\n" )
#     trainingHours += 2   

## if we do not meet the condition, we never enter the while loop: 
trainingHours = 50
# while (trainingHours < 50):
#     print( 50 - trainingHours, " hour(s) still required for certification.\n" )
#     trainingHours += 2

## There are times we want to run through the loop at least once no matter what the value is
## Some languages have a specific do-while syntax. We can achieve the same effect in Python with this:
flag = True
# while (flag):
#     print( 50 - trainingHours, " hour(s) still required for certification.\n" )
#     trainingHours += 2
#     if (trainingHours > 50):
#         flag = False            ## we could also insert a break statement here
        
## Notice that the while loop is a "pretest" loop (for loops are also pretest)

## You may also need a way to set up a loop that will just keep going forever (or until you unplug the machine...)
# while (True):
#     print( "Still going...", end=' ' )


## SENTINEL VALUES
## We can use a key value OR a value that we are sure is totally outside the range of a set of values to determine when to start or halt a loop
traineeTime = 0
trainingDay = 1
# while (traineeTime > -1 ):          ## We are certain that traineeTime will never be <= -1
#     traineeTime = int(input ( "Enter your training hours: " ))
#     print( "Day ", trainingDay, ": ", traineeTime, " hours" )
#     trainingDay += 1
    
## Write a while loop that continues to ask a user to enter their number of training hours 
## while their days are less than 50 and their cummulative hours are less than 100.
## Submit as participation #3