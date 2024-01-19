#   Author: Jo Crandall
#   CPSC 215 Math Operations 
#   Jan 31, 2022
#   Gonzaga University
#   This program explores more examples of mathematical operations, plus some formatting tips

## generate random numbers...

#import random                   ##import the library called random                                                   call  -> random.random()
#from random import random       ##from the library called random import the function called random                    call  -> random()

# print (random.random())
# print (random.randint( 1, 7 ))
# print (random())


## Note that numpy.random can do basically what random can do, plus a lot more.. we'll check it out when we start creating sequences
## Here are three ways to handle importing and calling the random function from numpy.random:
#import numpy                    ##import the library called numpy                                                     call  -> numpy.random.random()
#from numpy import random        ##from the library called numpy import the library called random                      call  -> random.random()
#from numpy.random import random ##from the library random within the library numpy import the function called random  call  -> random()

## Here are corresponding ways to call the numpy.random.random() function depending on which import statement we are using
# print (numpy.random.random())
# print (random.random())
# print (random())



## multiple assignment
a = b = c = 42
# print( a )
# print( a, b, c )

e = 42
f = g = 8
#print( e + g )

## we can break very long lines of code into multiple lines with \  (try it without \ as well) 
## note that trailing whitespace will break this
h = 10000000000000000000000000000000 \
    + 255555555555555555555555555555 \
    +                              4

print( h )

## combined assignment - assignment operators
i = 12
i += 1      ## adds one to old value of i and saves sum as new value of i, same as i = i + 1
# print( i )

i *= 3      ## multiplies old value of i by 3 and saves product as new value of i, same as i = i * 3
# print ( i )

i /= 4      ## what does it do?
# print( i )

i -= .75    #what does it do?
# print( i )

i //= 4     #what does it do?
# print( i )

## more assignment operators are available, check out the textbook


## formatting output
## I can break output into multiple lines
#print( 'I\nLove\nPython')

## or force multiple print statements into one line of output (suppress the newline)
# print( 3, end='' )
# print( '.', end='')
# print( 1, end='')
# print( 4 )

## or align output
# riprint( 'Josh\t', 6 )
# pnt( 'Jo\t', 19 )

## and printing blank lines often comes in handy
#print('\n\n\n')

## more math functions

import math
#from math import sin, pi

## sine
# print( math.sin( math.pi / 4) )
# print( sin( pi/4 ) )

## cosine

## tangent
## square root
## natural log
## log base 10
## exponential



    
