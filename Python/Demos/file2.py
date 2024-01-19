#   Author: Jo Crandall
#   CPSC 215 File I/O 
#   Feb 7, 2022
#   Gonzaga University
#   This program demonstrates writing to a file


## we use the open() function to access or create files for reading or writing
outfile = open( 'writing_test.txt' , 'w')

### CAUTION!!  opening in 'w' write mode will erase ALL DATA in the file if there was any

## We'll write a string to our writing_test file:
outfile.write( 'Hello,')
## Let's try writing again:
outfile.write( ' world.')   ## what could we change?  with space, or  + '\n'

## How about writing numeric values
#outfile.write( 42 )    ## str(42) or '42'

outfile.close()  ## remember to close a file as soon as you are done with it

## .readline and .write work only on strings. We must cast to ints to use actual numbers, 
## .lstrip() removes whitespace on the left, .rstrip() removes whitespace on the right.
infile = open( 'nums.txt', 'r')
# num1 = infile.readline().strip()
# num2 = infile.readline().strip()
# print( num1 + num2)   ## what's happening here???

# num1 = int(infile.readline())
# num2 = int(infile.readline())
# print( num1 + num2 )
infile.close()

## Now let's try appending to the end of the file
outfile = open( 'nums.txt', 'a')

# outfile.write( '\n' )
outfile.write( str(42) + '\n' )
outfile.write( str(3.14) + '\n')

outfile.close()

