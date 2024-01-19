#   Author: Jo Crandall
#   CPSC 215 Function basics 3
#   Feb 9, 2022
#   Gonzaga University
#   This program demonstrates variable scope.



## A variable declared outside any function is automatically a global variable in the file
## Every function in the file can also see and use the global variable
studentName = 'Jo'

def printName():
    print(studentName)       ## here, we are inside the function printName(), but can see the variable studentName

## Remember, nothing will happen unless we call our function
printName()


## If however we declare a variable inside a function, it is only a local variable
## The variable doesn't exist outside the function
def assignID():
    studentID = 123456
    return studentID

print(assignID())


## Furthermore, other functions cannot see or use the variable
def printID():
    studentID = assignID()
    print(studentID)

printID()


## We can make a variable which is declared inside a function global by using the global keyword
## Note that to do this we need to first declare, THEN assign a value
def assignYear():
    global studentYear
    studentYear = 'Freshman'
    #global studentYear = 'Freshman'           ## this way will not work

assignYear()
print(studentYear)   ## we can see the global variable that was created inside assignYear()

## Note that studentYear is a global VARIABLE, which means it's value can still be changed anywhere in the program
## That is, global does not mean constant, it just means globally visible
#studentYear = 'Sophomore'
#print(studentYear)

## If we want a global CONSTANT (far recommended above global variables) then we use techniques we've previously seen
## 1) declare a variable at the beginning of the program that you will use in place of the value everywhere (easy to update) OR
## 2) declare a variable in a separate file completely and import that file to further insulate the simulated constant






