# Author: JoCrandall
# Feb 9, 2022
# Examples of functions with/without returns, and keyword arguments.

from math import sqrt

############# Define all functions...#####################

## The computeSlope() function computes and returns the slope between two points
def computeSlope(x1, y1, x2, y2):
    rise = y2 - y1
    run = x2 - x1
    slope = rise / run
    return slope
    #return round(slope, 2)     ## returns the value already rounded to two decimal places


## The printSlope() function computes the slope but DOESN'T RETURN it
def printSlope(x1, y1, x2, y2):
    rise = y2 - y1
    run = x2 - x1
    slope = rise / run
    print( slope )


## FUNCTIONS CAN CALL OTHER FUNCTIONS:
## The measurements() function CALLS the computeSlope() function
## Notice this function takes ZERO parameters/arguments
def measurements():
    x1 = float( input("Input first x-coordinate: ") )
    y1 = float( input("Input first y-coordinate: ") )
    x2 = float( input("Input second x-coordinate: ") )
    y2 = float( input("Input second y-coordinate: ") )
    print( "The slope is: ", computeSlope(x1, y1, x2, y2))
    # printSlope(x1, y1, x2, y2)
    # How would we change this if we called the computeSlope() function instead?


## here's another function example using strings
def concatenate(string1, string2, string3):
    conString = string1 + string2 + string3
    return conString

################################################################################################

def main():
 
    x1 = 1
    y1 = 2
    x2 = 3
    y2 = 4
    ## notice I can do the same thing on one line:
    # x1, y1, x2, y2 = 1, 2, 3, 4

    ## calling our slope functions using actual values
    #computeSlope(1, 1, 2 , 2)     ## notice, just calling the function computeSlope() doesn't print anything
                                   ## since calling computeSlope() returns a value, we can assign that value to a variable
    #printSlope(1, 1, 2, 2)

    ## calling our slope functions using variables
    #print( "The slope is: ", computeSlope(x1, y1, x2, y2) )  

    ## When we call the measurements() function, we don't send any arguments
    #measurements()
    
    ## Now we'll try using KEYWORD ARGUMENTS.
    ## this allows us to send args in different order
    #mySlope = computeSlope(x1=1, y2=2, y1=1, x2=2)  
    #print( mySlope )

    print( concatenate('python', 'is', 'awesome') )   ## notice again that the print function can act on the returned value of the called function
    print( concatenate( 'is', string3 = 'awesome', string2 = 'python') + '?')

main()