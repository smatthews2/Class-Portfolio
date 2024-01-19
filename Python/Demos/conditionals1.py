#   Author: Jo Crandall
#   CPSC 215 If Statements
#   Jan 24, 2022
#   Gonzaga University
#   This program demonstrates the if and if/else statements.

## if statements
## body is only executed if the condition is true

if (3 < 4):
    print( "3 is less than 4!" ) 
    
if (4 < 3):
    print( "4 is less than 3!" )

if 3 < 4: 
    print( "Look, ma, no parentheses!" )

if 3 < 4: print( "Just think of all the lines we'll save!" )

## more bools
if (True):
    print( "It is true!" )
      
# if (1):
#     print( "It is still true!" )
    
# if (False):
#     print( "Say it ain't so!" )
     
# if (0):
#     print( "It is not true!" ) 

# if (42):
#     print( "Is it true?" )



## if followed by else

myString = "banana"
myString = "aaaple"
if (myString == "banana"):
    print( "have banana" )   

else:   ##so myString != banana
    print( "no banana so sad" )
    

## notice that other comparisons can be used with strings as well

if (myString > "apple"):
    print( myString, "greater than apple" )

else: 
    print( myString, "not greater than apple" )


## nested ifs
x = 3
if (x < 100):
    print( "under 100... ", end='')
    if (x < 50):
        print( "under 50... ", end='')
        if (x < 10):
            print( "under 10... ", end='')
            if (x < 5):
                print( "under 5!!\n" )
            else:
                print( '\n' )
        else:
            print( '\n' )
    else:
        print( '\n' )

# print( '\n' )