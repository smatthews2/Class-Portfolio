##Author: Jo Crandall
##February 2022
##Type hinting AND default args 


## the functions we've used have no restriction on argument and return Type
## Python's dynamic data typing determines the appropriate data type during runtime
def ambiguousFunc(someInput, otherInput):
    return someInput + otherInput

print(ambiguousFunc(3, 5))

print(ambiguousFunc('hello ', 'world'))

## but we may have a situation where we want to statically INDICATE type of args and returns
## this is done with type-hinting, available in Python3.5 and up
def staticallyTypedFunc(someInput: int, otherInput: int) -> int:
    return someInput + otherInput

print(staticallyTypedFunc(3, 5))

## Notice, however, that the hinting provides useful info for the human but does not override
##   Python's dynamic typing behavior

print(staticallyTypedFunc('hello ', 'world'))


### We saw keyword args already
def funcA(num1, num2):
    return num1 + num2

print(funcA(num2 = 5, num1 = 7))

## we can also use DEFAULT arguments
def funcB(num1 = 5, num2 = 7):
    return num1 + num2

## since funcB() has default args for all parameters, we could send it zero args...
print(funcB())

## or one arg...
print(funcB(num1 = 6))

## or both args (without keywords)....
print(funcB(6, 51))

## or both args (with keywords)...
print(funcB(num1 = 6, num2 = 50))

## if we mix keyword and nonkeyword/positional args, keywords come last
## plus, positional args matched to ordered parameters...you should experiment with this...
#print(funcB(num1 = 6, 32))   #bad
#print(funcB(6, num1 = 32))   #bad
#print(funcB(6, num2 = 32))   #good