/// Header file to accompany arrays 4 file bundle

#ifndef MORE_TOOLS_H
#define MORE_TOOLS_H

#include <iostream>
using namespace std;

/// declaring global constants for multidimensional array sizes
const int ROWS = 3, COLS = 2, X = 3, Y = 3, Z = 3;

/// function prototypes
void printElements(const int inArray[], int size);
void addFour(int inArray[], int size);
void printAddress(int inArray[]);
void print2dElements(const int inArray[][COLS], int rows, int cols);
void print3dElements(const char inArray[][Y][Z], int x, int y, int z);

#endif