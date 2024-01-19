#   Author: Jo Crandall
#   CPSC 215 File I/O with loop
#   Feb 7, 2022
#   Gonzaga University
#   This program demonstrates writing and reading with loops

#################  Writing in a loop  ######################################

## We'll overwrite a file by opening it in write mode

outfile = open( 'writing_test.txt', 'w')   ## you can check that just the act of opening the file has wiped out its data!!

## Let's run a loop where we ask the user for input, then write that input to a file as: Name, Age

# write = True

# while( write ):
#     inName = input( 'Enter name: ')
#     inAge = input( 'Enter age: ')
#     outfile.write( inName + inAge)
#     userChoice = input( 'Would you like to enter another? (y/n) ')
#     if ( userChoice != 'y' ):
#         write = False

outfile.close()

#############  Reading in a loop - detecting end of file ##################

 ## open nums.txt in read mode
inFile = open("nums.txt", 'r')

## nums.txt holds three lines of numbers for the purposes of this experiment
## read a number from nums.txt (which will come in as a string), then cast it as an integer
# inNum = inFile.readline()
# print(type(inNum), inNum, end = '')
# nNum = int(inNum)
# print(type(nNum), nNum)

# inNum = inFile.readline()
# print(type(inNum), inNum, end = '')
# nNum = int(inNum)
# print(type(nNum), nNum)

# inNum = inFile.readline()
# print(type(inNum), inNum, end = '')
# nNum = int(inNum)
# print(type(nNum), nNum)

# inNum = inFile.readline()
# print(type(inNum), inNum, end = '')
# nNum = int(inNum)               ## this is the first line that fails, because, there is no valid item to turn into an int!!
# print(type(nNum), nNum)

inFile.close()

## how can we fix this???

## option 1: use an if statement every single time we read from the file, for example:
# inFile = open("nums.txt", 'r')
# inNum = inFile.readline()
# if (inNum != ''):
#     print(type(inNum), inNum, end = '')
#     nNum = int(inNum)               
#     print(type(nNum), nNum)
# else:
#     print("Nothing to read. End of file detected.")

# inFile.close()

## option 2: a reversed style of if statement similar to option 1
# inFile = open("nums.txt", 'r')
# inNum = inFile.readline()
# if (not inNum):
#     print("Nothing to read. End of file detected.")
# else:
#     print(type(inNum), inNum, end = '')
#     nNum = int(inNum)               
#     print(type(nNum), nNum)

# inFile.close()

## option 3: while loop to detect EMPTY line
# inFile = open("nums.txt", 'r')
# inNum = inFile.readline()
# while (inNum != ''):    ## while what is read is not an empty line...
#     print(type(inNum), inNum, end = '')
#     nNum = int(inNum)
#     print(type(nNum), nNum)
#     inNum = inFile.readline()
# inFile.close()

## option 4: for loop to detect NONempty line
inFile = open("nums.txt", 'r')
for inNum in inFile:
    print(type(inNum), inNum, end = '')
    nNum = int(inNum)
    print(type(nNum), nNum)
inFile.close()