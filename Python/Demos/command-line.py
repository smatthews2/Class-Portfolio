# Jo Crandall
# March 2022
# Practicing working with command line arguments

import sys  ## for command line interactions (getting sys.argv)
import numpy ## for array

# This function sums up all the arguments in the incoming args list and return their sum
def argsToSum(args):
    sum = 0
    # put a loop here
    return sum

# Now write the function to multiply all the arguments in the incoming args list and return their product
def argsToProduct(args):
    pass
   
# This function will generate a dictionary out of the incoming args list
# It will assign numerical keys and use the args as values
# Return the dictionary
def argsToDictVals(args):
    key = 1
    newDict = {}
    # put a loop here
    return newDict

# Now write the function to use the incoming args as keys instead,
# assigning increasing numbers to the values and return the dictionary
def argsToDictKeys(args):
    pass

# This function will generate a numpy array from the incoming args list.
# return the array
def argsToNumpyArray(args):
    pass

# Now write a function that will use (numerical) args to generate a one or two dimensional 
# numpy array of zeros. So if the args are 2, 6 it will be a 2x6 array of zeros
def argsToZeros(args):
    #if one arg comes in, generate a 1d array
    if(len(args) == 1):
        return numpy.zeros(int(args[0]))
    #if two or more args, generate a 2d array


# Write a function to generate a numpy identity matrix with the size of the first arg
def argsToEye(args):
    pass
 

def main(argv):
    
    # First lets custumize the list of args we'll be sending to each function
    # We want to chop the arg at index 0 since that's the name of the file we ran:
    print(argv)
    argsTrimmed = argv[1:]
    print(argsTrimmed)

    #print(argsToSum(argsTrimmed))
    #print(argsToProduct(argsTrimmed))
    #print(argsToDictVals(argsTrimmed))
    #print(argsToDictKeys(argsTrimmed))
    # print(argsToNumpyArray(argsTrimmed))
    # print(argsToZeros(argsTrimmed))
    # print(argsToEye(argsTrimmed))

   

main(sys.argv)   ## getting arguments from command line