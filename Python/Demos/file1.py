#   Author: Jo Crandall
#   CPSC 215 File I/O 
#   Feb 4, 2022
#   Gonzaga University
#   This program demonstrates reading from a file

def sumDiff(num1, num2):
    result1 = num1 + num2
    result2 = num1 - num2
    return result1, result2 # Produces a tuple.

answer1, answer2 = sumDiff(2,3)
answer = sumDiff(2,3)
print(answer[0], type(answer))

## we use the open() function to access or create files for reading or writing
## the open() function returns a file object
infile = open( 'nums.txt' , 'r')    ## the 'r' argument is to open for reading
# print( infile.readline(), end='' )          ## the file object has a method called readline that grabs data until the first newline character 
# print( infile.readline(), end='' )
# print( infile.readline(), end='' )


## what if we want to store the data read from the file into memory:
# lineANum = int(infile.readline())  ## notice that if I want to be able to do math on this number, I need to convert it to a numerical type, int(data)
# lineBNum = int(infile.readline())

# print(lineANum + lineBNum)

## it is good practice to close a file as soom as we are done reading from or writing to it
infile.close()

# print( infile.readline() )   ## I can't read lines because the file is now closed


## we can also read exactly one character at a time from the file
infile = open( 'alphabet.txt', 'r' )
# print ( infile.read(1) )
# print ( infile.read(1) )
# print ( infile.read(1) )
# print ( infile.read(1) )   ## notice that the read location is tracked the entire time the file is open, but if we close file we'll lose that place
#                            ## you can also change the number of characters read in at a time

## if you supply no args to read() it will read the entire file

## I may not know in advance how many characters are in the file. A while loop can help me continue until there is nothing to read in
# while( True ):
#    inChar = infile.read(1)
#    if (not inChar):            ## if infile.read() was not able to successfully read in another character
#         print( 'End of file')
#         break                   ## break out of the while loop
#    else:
#         print( inChar )
    
infile.close()

## you can investigate the .rstrip() and .lstrip() tools for getting rid of the trailing whitespace...