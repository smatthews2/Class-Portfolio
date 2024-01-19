# Jo Crandall
# Feb 2022
# List references and functions, lists vs tuples, 2D lists

from os import system
import sys  ## for command line interactions (getting sys.argv)
import fourFuncs as ff   ## importing my fourFuncs module
import random

def main(argv):
    ## When we send a list as an arg to a function, we're sending a reference to the list...
    ##   so changes we make to the list inside the function still apply when we exit the function
    ## We instantiate a list of ints and pass it to functions in our fourFuncs module
    
    # myIntList = [1, 2, 3, 4, 5, 6]
    # print('myIntList \t', myIntList)   ## print the list before sending it to the function
    # print('Here is the address of myIntList in list4.py:    \t\t', hex(id(myIntList)))
    # print('Here is the address of the first element in myIntList in list4.py: ', hex(id(myIntList[0])))

    # newList = ff.appendFourAndReturn(myIntList)
    # print('myIntList \t', newList)   ## print the list after sending it to the function
    # print('Here is the address of newList in list4:    \t\t', hex(id(newList)))
    # print('Here is the address of the first element in newList: ', hex(id(newList[0])))

    # ff.appendFourWithoutReturn(myIntList)
    # print('newList \t', myIntList)
    # print('Here is the address of myIntList in list4:    \t\t', hex(id(myIntList)))
    # print('Here is the address of the first element in myIntList: ', hex(id(myIntList[0])))



    # print(myIntList)   ## print the list before sending it to the function
    # ff.deleteFourthIndex(myIntList)
    # print(myIntList)   ## print the list after sending it to the function

    # print(myIntList)   ## print the list before sending it to the function
    # ff.removeFour(myIntList)
    # print(myIntList)   ## print the list after sending it to the function

    ## What if there are more than one '4' in the list? What will the remove() function do?  
    # ff.appendFour(myIntList)
    # ff.appendFour(myIntList)
    # ff.appendFour(myIntList)
    # print(myIntList)
    # ff.removeFour(myIntList)
    # print(myIntList)   ## print the list after sending it to the function

    ## Let's use the repetition operator on our list
    # print(myIntList)   ## print the list before sending it to the function
    # ff.copyFourTimes(myIntList)
    # print(myIntList)   ## print the list after sending it to the function

    ## Try to multiply every entry by four
    # print(myIntList)   ## print the list before sending it to the function
    # ff.multByFour(myIntList)
    # print(myIntList)   ## print the list after sending it to the function

    ## What if we want a list slice that contains only the first four elements?
    # myIntList.append(6)
    # print(myIntList)
    # ff.sliceFour(myIntList)
    # print(myIntList)

    #################################################################
    ## We can also have two-dimensional lists or 'nested lists' (like matrices!)
    # my2DList = [[1, 2], [3, 4]]
    # print(my2DList)

    # my2x3List = [[1, 2, 3], [4, 5, 6]]
    # print(my2x3List)

    ## To access an element of the outer list (which could be seen as a row of a matrix):
    # print(my2DList[0])
    # print(my2x3List[1])

    ## To access an element of one of the inner lists:
    # print(my2DList[1][0])
    # print(my2x3List[0][1])

    ## Now let's use what we learned about command line args last time to generate a "matrix"
    ROWS = int(argv[1])
    COLS = int(argv[2])
    system('clear')
    print('The matrix will have', ROWS, 'row(s) and', COLS, 'column(s).')

    ## create an empty list
    matrix = []
    
    ## size the empty matrix to the ROWS and COLS, filling it with zeroes
    for i in range(ROWS):
        matrix.append([0])
        for j in range(COLS - 1):
            matrix[i].append(0)
    # print(matrix)

    ## Now to fill up the rows and columns with random numbers
    for i in range(ROWS):
        for j in range(COLS):
            matrix[i][j] = random.randint(1, 100)
    
    # print(matrix)

    ## To make this appear more 'matrix' like, we can print one row at a time
    ## what's a row of this 2D list??
    
    for i in range(ROWS):
        print(matrix[i])



main(sys.argv)   ## getting arguments from command line