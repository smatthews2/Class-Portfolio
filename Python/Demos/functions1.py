#   Author: Jo Crandall
#   CPSC 215 Function basics
#   Jan 26, 2022
#   Gonzaga University
#   This program demonstrates basic function structure.


## basic function structure 

###        def myFuncName( funcParameter ):
###           body of function

## This function receives a number and returns twice its value.
## Input: one number (the number to be doubled)
## output: one number (twice the value of the input)
def doubleNum( inNum ):         # this line establishes the name of the function and what parameters it needs
    newNum = inNum * 2          # this line creates a new variable and stores twice the input in it
    return newNum               # this line returns the new value back from the function to wherever it was called

## a PARAMETER is a function's expected input. We call the function with the correct number of ARGUMENTS to fill those parameters
## now we can CALL (use) the doubleNum function:
#myNum = doubleNum(5)
#print(myNum)

## try calling the function BEFORE it's definition....
## try calling with another kind of argument...

## This function receives a number then returns its value squared
## Input: one number (the value to be squared)
## Output: one number (the squared value)
def squareNum( num ):
    squaredVal = num * num
    #print( num , ' squared is ' , squaredVal )     ## for concatenation (+) of strings, they must all be strings, str()
    return squaredVal

myNewNum = squareNum(5)
print(myNewNum)

## We can also give a functions multiple arguments
def multiplyNums( num1, num2 ):
    return( num1 * num2)
## what are alternative ways to write each of these functions?    

x = multiplyNums(3,4)
print(x)

## the order of the args matters
def subtractNums( num1, num2 ):
    return( num1 - num2 )

print(subtractNums(12, 7))   ## which one goes to parameter num1?
print(subtractNums(7, 12))   ## which one is num1?

def main():
    print(subtractNums(3,2))

main()