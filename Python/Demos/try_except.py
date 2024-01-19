#Jo Crandall
#March 2022
#Using try-except to keep a program running even if there is a problem!


def main():

    ## let's try something that we know should not work:
    # print(a)   ## this will fail because a is undefined

    ## try-except example 1
    ## an except clause with no ExceptionName specified will run if the try suite has any kind of problem whatsoever
    try:
        print(a)
    except:
        print("Something went wrong...")

    
    ## example 2
    ## an except clause can use specific ExceptionNames that you anticipate could occur
    # try:
    #     print(b)
    # except NameError:
    #     print("I'm not sure what you want me to print. b is undefined...")


    ## example 3
    ## we can group multiple except clauses after a try suite to handle various specific ExceptionNames
    # try:
    #     print('a')
    #     float('hi there')

    # except NameError:
    #     print("You are attempting to use an undefined variable...")
    # except ValueError:
    #     print("You may be trying to improperly convert a value...")

    ## example 4
    ## a combination of specific named clauses and an unnamed clause can also be used
    # try:
    #     print('a')
    #     inFile = open("nonexistentfile.txt")
    # except NameError:
    #     print("You are attempting to use an undefined variable...")
    #     print("Yes, I can have multiple lines of code in an exception clause...")
    # except:
    #     print ("Something seems to have gone wrong...")
    #     print ("Yes, I can have multiple lines of code in the exception clause...")

    ## Note that only the FIRST problem encountered in the try suite will trigger an exception, and the rest of the code in the try will be skipped

    ## example 5
    ## We can also have an else suite. If NO EXCEPTIONS are raised by the try suite, the else suite will run
    # try:
    #     userInput = int(input("Enter an integer:"))
    # except:
    #     print ("There was a problem with your input")
    # else:
    #     result = userInput + 1
    #     print("One more than that is ", result)

    
main()