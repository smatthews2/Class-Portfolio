#   Author: Jo Crandall
#   CPSC 215 Loopss - For loops
#   Feb 2, 2022
#   Gonzaga University
#   This program demonstrates for loops using lists and range(), as well as block scope


# import numpy as np              ## I will use np as a "nickname" for the numpy library

## A basic for-loop example

# for count in [1, 2, 3, 4, 5]:   ## this is an example of ITERATION over a list. We can choose ANY placeholder name for the items in the list
#     print(count)                ## here we are printing the actual items in the list


# for count in [1, 2, 3, 4, 5]:
#     print( "Hi!")               ## here we are still moving through the items in the list but just not directly using them for anything


# for count in range(5):          ## range() provides the number of items I would like to iterate over
#                                 # by default, this format assumes count starts at zero and increments by 1
#     print(count)                ## notice what is printed


# for count in range(1, 5):       ## first arg is my starting value, second is the ending limit or upper bound , where assumption is still to increment by 1
#     print(count)

# for count in range(1, 10, 2):   ## third arg is the step size I choose
#     print(count)

## trying the range(a, b, c) with non-integers doesn't work, try it!
## for that we can use the numpy library:
# for count in np.arange(1, 5, .5):   ## just like range, first arg = start val, 2nd arg = end val, 3rd arg = step size
#     print(count)

## these have all been examples of incrementing UP, but we can also DECREMENT or count DOWN
# for count in [5, 4, 3, 2, 1]:
#     x = 10 - count
#     print(x)

# for count in range(10, 0, -2):  ## notice if I omit the third arg here what happens...why?
#     print(count)

# for count in np.arange(2, 1, -.1):   ## what will it print?
#     print(count)

## finally, we can also use lists that are not numbers at all. again, I can choose any placeholder name for the items in the list
# for word in ["cat", "dog", "mouse"]:
#     print(word)


## to reiterate, there is NOTHING SPECIAL about the words 'count' or 'word' in these examples. For INSTANCE:
# for word in range(5):
#     print(word)

# for count in ["Jo", "Crandall" ,"Gina"]:
#     print(count)