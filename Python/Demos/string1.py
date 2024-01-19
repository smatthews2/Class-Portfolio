#Jo Crandall
#March 2022
#Working with strings in Python


## strings can be accessed character by character since strings are sequences
## the individual characters exist at indexable locations
myString = 'Fuzzy Wuzzy'
# print (myString[0])
# print (myString[5])
# print (myString[6]) 

## we can also do this with string literals
# print('Jo'[0]) 

# for ch in 'Fluffy Bunny':
#     print(ch)

## or if the string is stored in a variable:
# for ch in myString:
#     print(ch)

# string = 'test'

# for char in string:
#     print(char)
  

## let's try to replace an index value of a string
# myString[0] = 'Z'                 ## we get an error because strings are immutable (recall that tuples are also immutable)

## however, we CAN assign the indexed values of strings to OTHER variables
# myChar = myString[0]

## What about negative indices?
#print (myString[-1])
#print ('Bulldog'[-2])

## We still have to keep index range in mind
#myVar = myString[20]
#mychar = 'Bulldog'[-8]

## We've already seen string concatenation
# print ('cat' + 'fish')
str1 = 'CAT'
str2 = 'FISH'
# print(str1 + str2)

## We can use combined assignment for concatenation as well
# str1 += 'fish'
# print(str1)
# print('cat' + str2)

## Slicing strings
bigString = 'Hello, nice to meet you'
# print(len(bigString))
# print(bigString[5:10])
# print(bigString[15:])
# print(bigString[:8])

## or adjust the increment size
# print(bigString[0:23:3])
## equivalently...
# print(bigString[ : :3])

## in and not in
# if ('nice' in bigString):
#     print('String found')

# if ('Nice' not in 'How nice'):
#     print('String not found')

## the .isdigit() method returns true if the string has only numbers
numString = '123'
# if (numString.isdigit()):
#     print("it's numbers")

## .isalpha() returns true if string is all letters
# if(bigString.isalpha()):
#     print('letters!')

# if(str1.isalpha()):
#     print('letters!')


## other string testing methods to experiment with
## is alphanumeric  =  string.isalnum()
## is lowercase letters  =  string.islower()
## is uppercase letters  =  string.isupper()
## is whitespace  =  string.isspace()

## string modification methods
newString = bigString.lower()
#print(newString)
#print(bigString)

## lstrip, rstrip, strip
someString = 'abcabca'
lstripStr = someString.lstrip('a')
#print(lstripStr)

rstripStr = someString.rstrip('a')
#print(rstripStr)

stripStr = someString.strip('a')
#print(stripStr)


## try these and see what they do
#string.upper()
#string.strip()
#string.lstrip()
#string.rstrip()

## find a substring within a string
location = bigString.find('meet')
#print ("The substring 'meet' begins at index", location)

## replace a substring with a different string (in a copy of the original string)
# print(bigString)
# swapStr = bigString.replace('meet','see')
# print(swapStr)
# print(bigString)


### Participation #10 material....
text = 'Today we saw Mary and Jen at the market buying apples and bananas'
confidential = ['Mary','Jen','apples','bananas']