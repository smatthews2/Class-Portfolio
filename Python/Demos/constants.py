#   Author: Jo Crandall
#   CPSC 215 Constants & Conditionals
#   Jan 28, 2022
#   Gonzaga University
#   This program demonstrates the use of 'constants' 

def main():

    ## constants can be used to set a particular value that will be accessed multiple times
    ## that way, if the value changes, you only need to change it in one place in your code

    MY_PI = 3.14    ## note that this is really just a normal variable that can be changed at any time!

    ## we will use a variable for radius that we gather from the user

    ## get a radius from the user
    inRadius = int(input( "Enter radius: "))              ## we will bump into a data type problem here...   float(variable)

    ## compute the area of the circle or indicate invalid radius entered
    if (inRadius > 0):
        myArea = MY_PI * inRadius * inRadius
        print( "The area of a circle with that radius is: ", myArea )
    
    elif (inRadius == 0):
        print( "Radius must be nonzero" )
    
    else:
        print( "invalid radius" )
    

    ## compute the volume of the sphere or indicate invalid radius entered
    if (inRadius > 0):
        myVolume = 4 / 3 * MY_PI * inRadius ** 3
        print( "The volume of a sphere with that radius is: ", format(myVolume, '.2f'))
        ## we can format the length of numerical output
        #print( "The volume of a sphere with that radius is: ", format(myVolume, '.2f') )
    
    elif (inRadius == 0):
        print( "Radius must be nonzero" )
    
    else:  ## notice that the trailing else can serve as error-catcher
        print( "invalid radius" )
    
    ## How else could this be structured??? 
    ## Can we write functions for our area and volume calculations??  

## now call the main function, otherwise nothing will happen...
main()    