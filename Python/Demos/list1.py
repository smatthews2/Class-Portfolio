# Jo Crandall
# February 2022
# Introduction to lists

## Lists are similar to arrays in C-type languages, and have more built-in functions
## We have seen lists before when using for-loops, such as:
# for i in [3, 13, 6]:
#     print(i)

## Now we will work with the list itself in new ways.
## Create a list of strings and store a reference to the list in the variable animals
animals = ['cat', 'dog', 'llama'] # If you want apostrophes in your strings, use quotes.

## Create a list of floats and store a reference to the list in the variable prices
prices = [12.50, 13.99, 18.02, 7.32]

## These lists can be printed as an intact list:
# print(animals)
# print(prices)

## REPETITION OPERATOR
## With lists, the * operator repeats lists a certain number of times
# moreAnimals = animals * 3 # operand (operator) operand
# print(moreAnimals)

# print([1, 2, 3, 4] * 2)

## Indexing of a list
## Each element of a list lives at a certain indexed location
## Python is a zero-indexed language (counting starts at zero)
## Format is list_name[index_location]
# print(animals[0])
# print(animals[2])
# print(prices[2])

## Let's try printing a higher index
#print(animals[3])

## We can also replace elements in the list
## Replace the first element in animals with 'snake'
# print(animals)
# animals[0] = 'snake'
# print(animals)

## We can find out how many elements are in a list with len()
# listLength = len(animals)
# print(listLength)

# print(len(prices))

## len() could be used to walk through a list
# listLength = len(prices)
# index = 0
# while (index < listLength):
#     if(prices[index] > 10):
#         print (prices[index], " That price is too high")
#     else:
#         print (prices[index], " That's a good price")
#     index += 1

## keep in mind that we can accomplish the same thing with:
# for element in prices:
#     if( element > 10):
#         print (element, " That price is too high")
#     else:
#         print (element, " That's a good price")

## We might want to look through a list to see if it contains a certain value
## One way is to explicitly write a loop with a comparison
## Let's see if 'llama' is contained in animals
# for i in animals:
#     if (i == 'llama'):
#         print('I found a llama!')

## Here's another way to write this search
if 'llama' in animals:
    print('I found a llama!')

## Or conversely, we might want to check if a value is missing from a list
if 'giraffe' not in animals:
    print('giraffe not found')

