# Jo Crandall
# February 2022
# Lists file 3: max, min, sort, reverse, lists as function arguments, command line args

import sys  ## for command line interactions
from threeFuncs import *     ## from my threeFuncs file import all functions


def main(argv):


    ## list of ints
    myList = [3, 6, 80, 12]

    ## sort a list in ascending order
    print(myList)
    myList.sort()
    print(myList)

    ## reverse a list
    # print(myList)
    # myList.reverse()
    # print(myList)

    ## maximum value in list
    #print(max(myList))

    ## minimum value in list
    #print(min(myList))

    ## referring to list by multiple names (list copying)
    newList = [43, 2, 12, 97]
    newerList = newList
    #print(newList)
    #print(newerList)
    

    ## notice that the variable names newList and newerList both point at the same actual list
    ## therefore, a change in one of them means a change in both of them
    newList.append(6)
    #print(newList)
    #print(newerList)

    ## this happened because we used the "=" assignment to copy the list
    ## the reference to newList was assigned to newerList
    ## here is a way to start with a list that has the same contents but isn't the SAME LIST
    separateList = []
    for i in range(5):
        separateList.append(newList[i])   ## dealing directly with list elements instead of the reference to the list

    #print(separateList)
    newList.append(31)
    #print(newList)
    #print(separateList)


    ## NOTICE then, that if we write
    list1 = [1, 2, 3]
    list2 = [1, 2, 3]
    list1.append(4)
    #print(list1)
    #print(list2)
    #print(hex(id(list1)))  ## print the memory address of this list
    #print(hex(id(list2)))

    ## BUT if we write
    list3 = [4, 5, 6]
    list4 = list3
    list3.append(7)
    #print(list3)
    #print(list4)
    #print(hex(id(list3)))
    #print(hex(id(list4)))

    ## we can send a list as an argument to a function.
    ## note the call to the function within the print statment
    #print('Number of values over three is: ', valsOverThree(myList))

    ## we can also send an element of a list as an argument to a function
    #print (valIsThree(myList[0]))

    #for i in myList:
    #    print('Is ', i, ' equal to 3?  ', valIsThree(i))

  
    

    ## we passed in an argument to main called argv, which is a list of arguments that came in from the command line
    ## lets investigate argv
    #print(type(argv))
    ## lets print the first element of the list
    #print(argv[0])
    ## how about the next element?
    #print(argv[1])
    #print(argv[2])

    ## remember how to tell how long a list is?
    numCmdArgs = len(argv)
    #print( numCmdArgs, ' args were passed in from command line')



main(sys.argv)   ## sys.argv is how we take the command line arguments into our program



