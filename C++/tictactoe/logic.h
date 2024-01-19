#ifndef LOGIC_H
#define LOGIC_H

#include <iostream>
#include <experimental/random> // For randint().
using namespace std;

// All functions declared in the header file.
void printGameBoard(const char inArray[3][3], int rows, int cols), arr1DTo2D(int, int&, int&);
void calculateAIMove(void), playerMove(void), checkBoard(int, int), update1DArray(char inArray[3][3]);
bool displayMenu(void), allSpacesFull(void);
int winCond(char inArray[3][3]);

// All global variables declared in the header file.
static char gameBoard[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}}, winMove[9];
static bool playerTurn = true;

#endif