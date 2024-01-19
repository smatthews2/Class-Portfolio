#   Author: Sebastian Matthews
#   CPSC 215 PA2: Codename Confirmation
#   Jan 26, 2022
#   Gonzaga University
#   This program asks two users to input a codename, proceeding to "lock out" the user who inputted theirs incorrectly.
#   If both users input said codename correctly, both are granted access.

# Declare "constant"(in the sense that I won't change and emphasized by the macro-case) variables upfront.
CORRECT_CODE_NAME = 'sword'

def runInstance(): # This function controls the entire decision structure when called.
    for x in range (1,4): # This for loop lets the function run 3 times, which I looked up.
        if(x == 1):
            print('You start with 3 tries.') # Inform the users of their chances.
        inputName = input('Agent 1, enter codename.\n')
        inputOtherName = input('Agent 2, enter codename.\n')
        if(inputName == CORRECT_CODE_NAME and inputOtherName == CORRECT_CODE_NAME):
            print('Both codenames correct. Welcome, agents 1 and 2!')
            return 0
        elif(inputName != CORRECT_CODE_NAME and inputOtherName == CORRECT_CODE_NAME):
            if(x == 2):
                print('Agent 1\'s input is incorrect!\nRe-enter both codenames. You have', 3 - x, 'try remaining.')
            else:
                print('Agent 1\'s input is incorrect!')
                if(x != 3):
                    print('Re-enter both codenames. You have', 3 - x, 'tries remaining.')
        elif(inputName == CORRECT_CODE_NAME and inputOtherName != CORRECT_CODE_NAME):
            if(x == 2):
                print('Agent 2\'s input is incorrect!\nRe-enter both codenames. You have', 3 - x, 'try remaining.')    
            else:
                print('Agent 2\'s input is incorrect!')
                if(x != 3):
                    print('Re-enter both codenames. You have', 3 - x, 'tries remaining.')
        else:
            if(x == 2):
                print('Both incorrect!\nRe-enter both codenames. You have', 3 - x, 'try remaining.')
            else:
                print('Both incorrect!')
                if(x != 3):
                    print('Re-enter both codenames. You have', 3 - x, 'tries remaining.')

    # Below is a series of fail conditions, in which the program closes if met.
    if(x == 3 and inputName == CORRECT_CODE_NAME and inputOtherName != CORRECT_CODE_NAME):
        print('Agent 1\'s input is correct! Welcome, agent 1!\nAgent 2, you\'re locked out.')
    elif(x == 3 and inputName != CORRECT_CODE_NAME and inputOtherName == CORRECT_CODE_NAME):
        print('Agent 2\'s input is correct! Welcome, agent 2!\nAgent 1, you\'re locked out.')
    else:
        print('Both agents locked out! Program shutting down...')

def main():
    runInstance()

main() # Main has to be called, just like any other function.