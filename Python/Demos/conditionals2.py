#   Author: Jo Crandall
#   CPSC 215 Else If Statments
#   Jan 26, 2022
#   Gonzaga University
#   This program demonstrates the if - elif - else statements.

#   if(something):
#   |   do it


## elif -"else if" - allows more than one condition to be tested
x = 34
if (x == 50):
    print( "fifty! awesome!" )
elif (x % 2 == 0):  ## x wasn't 50, testing to see if even
    print( "at least it's even..." )
else:               ## x is neither equal to 50 nor is it an even number
    print( "I just give up then" )



## we can have as many elif conditionals as needed
myString = "Zed"
if (myString == "Jo"):
    print( "I thought as much" )
elif (myString == "Crandall"):
    print( "You've got some explaining to do" )
elif (myString == "Gina"):
    print( "What a surprise" )
elif (myString < "Zed"):
    print( myString, "< Zed? I think not!" )
else:
    print( "Who are you again?" )
   