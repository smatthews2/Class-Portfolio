#   Author: Sebastian Matthews
#   CPSC 215 PA6: Connect Four
#   Mar 16, 2022
#   Gonzaga University
#   This program runs a game of connect four, where two users attempt to make a line of four chips in a 6 * 7 board.
#   Each user gets the option to drop a chip down a selected column, where it lands at the bottom or atop another piece.
#   Once a user aligns four pieces along the board, they are declared the winner. If the board is full and no one has down, a draw is declared.

from os import system # Mainly for clearing the terminal.
import wins # Example win conditions used to test functions.

gameBoard = wins.boardE # Take the empty board from "wins.py".

def displayBoard():
    system('clear')
    print(gameBoard)

# This function places a chip at the bottom of a given column(or on top of a chip if the bottom is filled).
def placeChip(col : int, sym : str):
    for i in range(5, -1, -1): # We read the board from the bottom of the selected column...
        if(gameBoard[i][col] == '-'): # ...and if it's open...
            gameBoard[i][col] = sym # ...put the player's symbol down.
            break

# The functions with "-Check" see if a win condition is met, with hasFour using them all.
def vertCheck(userSym, col):
    count = 0
    
    for i in range(5): # We move down the column by incrementing the rows...
        if (gameBoard[i][col] == userSym and gameBoard[i + 1][col] == userSym):
            count += 1
            if (count == 3): #... and if we have a vertical line...
                return True # ...a user has won!
    
    return False

def horzCheck(userSym, row):
    for i in range(4): # We use "i" as the initial column position of the horizontal win, and check the other 4 tiles to the right...
        if (gameBoard[row][i] == userSym and gameBoard[row][i + 1] == userSym and gameBoard[row][i + 2] == userSym and gameBoard[row][i + 3] == userSym):
            return True # ...to make sure a user has won!
    return False

def downDiagCheck(userSym, row, col):
    count = 0
    
    for i in range(4):
        if (gameBoard[row + i][col + i] == userSym):
            count += 1
            if (count == 4):
                return True
    
    return False

def upDiagCheck(userSym, row, col):
    count = 0
    
    for i in range(4):
        if (gameBoard[row - i][col + i] == userSym):
            count += 1
            if (count == 4):
                return True
    
    return False

def hasFour(userSym):
    # Check all the verticals...
    for i in range(7):
        if(vertCheck(userSym, i)):
            return True

    # ...and all the horizontals...
    for i in range(6):
        if(horzCheck(userSym, i)):
            return True

    # ...AND the diagonals...
    for i in range(3):
        for j in range(4):
            if(downDiagCheck(userSym, i, j)):
                return True

    for i in range(5, 2, -1):
        for j in range(4):
            if upDiagCheck(userSym, i, j):
                return True

    return False # If none of the previous conditions are met, no one has won.

def boardFull():
    for i in range(6):
        for j in range(7):
            if(gameBoard[i][j] == '-'):
                return False
    return True

# This function manages the game.
def playConnectFour():
    gameTurn = 0
    
    while True:
        if gameTurn % 2 == 0:
            print('Player 1, ', end = '')
            userTurn = int(input('please enter the column that you would like to put your chip in: '))
            userSym = 'x'
            placeChip(userTurn, userSym) # Place the chip...
            displayBoard() # ...and show the user the changes made to the board.
            if(hasFour(userSym)):
                print('Player 1 won in', gameTurn + 1, 'turns!')
                return 0
        else:
            print('Player 2, ', end = '')
            userTurn = int(input('Please enter the column that you would like to put your chip in: '))
            userSym = 'o'
            placeChip(userTurn, userSym) # Place the chip...
            displayBoard() # ...and show the user the changes made to the board.
            if(hasFour(userSym)):
                print('Player 2 won in', gameTurn + 1, 'turns!')
                return 0
            if(hasFour(userSym) == False and boardFull()):
                print('Draw!')
                return 0
        gameTurn += 1

if __name__ == '__main__': # Guard code for testing.
    def main():
        displayBoard()
        playConnectFour()

    main()