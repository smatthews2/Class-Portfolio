#   Author: Jo Crandall
#   CPSC 215 Data Types & Variables
#   Jan 19, 2022
#   Gonzaga University
#   This program explores examples of variables and data types. Note that variable naming conventions should be followed.


import sys  ## for the getsizeof method
    
## primitive data types and their sizes (on YOUR machine)
## string types
myChar = 'a'
print( type(myChar) )  ## notice that chars are really just strings!
print( sys.getsizeof( myChar ) )
    
    
## integer type
myInt = 42  
#print( type(myInt) )
#print( sys.getsizeof(myInt) )

## since Python storage space for objects is complicated... that's ALL we're going to worry about data type sizes this term

## floating point type
myFloat = 3.14
#print( type(myFloat) ) 
    
## boolean - true/false
myBool = True    ## try with/without capitalized t
#print( type(myBool) )


## naming conventions - note, Camel case and Pascal case most commonly used in code body
## camel case
myStrVariable = 'Hi there'

## Pascal case
MyIntVariable = 42

## snake case
my_str_variable = '5'

## macro case
MY_FLOAT_VARIABLE = 3.14

## When we get user input, Python automatically makes it a string:
#userNum1 = input('Enter first number: ')
#userNum2 = input('Enter second number: ')
#userSum = userNum1 + userNum2
#print('Here is the sum of your numbers: ', userSum)
## What seems to have happened??

## To do the expected mathematical sum, the numbers need to be numerical types, such as int or float
## Here is one way to do that:
#userNum1 = int(userNum1)
#userNum2 = int(userNum2)
#userSum = userNum1 + userNum2
#print('Here is the sum of your numbers: ', userSum)

## Here is another way:
#userNum1 = int(input('Enter first num: '))
#userNum2 = int(input('Enter second num: '))
#print('Here is the sum of your numbers: ', userNum1 + userNum2)

## And yet another way:
#userNum1 = input('Enter first num: ')
#userNum2 = input('Enter second num: ')
#print('Here is the sum of your numbers: ', int(userNum1) + int(userNum2))