#   Author: Jo Crandall
#   CPSC 215 Function basics 4
#   Feb 9, 2022
#   Gonzaga University
#   This program demonstrates returning multiple values from a function.


## The function studentInfo will return multiple values 

''' Function name: studentInfo()
    Arguments: none
    Returns: tuple of name, year, balance
    Last modified: 2.9.22 
'''
def studentInfo():
    studentName = 'Jo'
    studentYear = 'Junior'
    studentAcctBal = 42.15       ## This is a floating point num, will it still be that way when returned as part of multiple returns?? (see below)
    return studentName, studentYear, studentAcctBal

## This method of returning multiple values is called returning a 'tuple'

def main():
    #print(studentInfo())  ## i can print out the tuple that is returned from studentInfo()

    ## Let's assign the returned values to variables instead:
    sName, sYear, sBal = studentInfo()                      ## need to add in sBal...
    print(sName, sBal)                  ## Now that the returned vals are contained in variables, I can use them however I need to
    print(sYear)

    ## If a function returns multiple values, I can also capture them all in a single variable
    sInfo = studentInfo()      ## so now, sInfo actually contains a tuple
    print(sInfo)        #We'll talk more about the difference between these in the next chapter

    print(type(sInfo))
    print(type(sName),type(sYear),type(sBal))


#Remember, nothing will happen unless we call our main
if __name__ == '__main__': # Guard code(Header file): we're checking if name is defined by the terminal call.
    main()