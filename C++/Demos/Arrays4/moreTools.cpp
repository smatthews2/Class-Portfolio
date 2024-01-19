/// Implementation file for arrays4 file bundle

#include "moreTools.h"

/// if I don't want a function to modify the contents of an array, I can use const with the array parameter

// Function to print contents of array
// Arguments: array, arraysize
// Return: void
void printElements(const int inArray[], int size){
    for (int i = 0; i < size; i++){
        cout << inArray[i] << ' ';
    }
    cout << endl;
}

// Function to add 4 to each element of array
// Arguments: array, arraysize
// Return: void
void addFour(int inArray[], int size){
    for (int i = 0; i < size; i++){
        inArray[i] += 4;
    }
}

// Function to print memory address of incoming array
// Arguments: array
// Return: void
void printAddress(int inArray[]){
    cout << "The array I see in printAddress() is located at address: " << inArray << endl;
}

// Function to print elements of 2d array
// Arguments: 2d array, int rows, int columns
// Return: void
void print2dElements(const int inArray[ROWS][COLS], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << inArray[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print elements of 3d array
// Arguments: 3d array, int rows, int columns, int third dimension
// Return: void
void print3dElements(const char inArray[X][Y][Z], int x, int y, int z){
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                cout << inArray[i][j][k] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
}