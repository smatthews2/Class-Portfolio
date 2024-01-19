/// This is the implementation file for the arrays3 file bundle

#include "arrayTools.h"

/*Function to compare two arrays to see if equal
* Inputs: two integer arrays
* Output: bool, whether arrays equal
*/

bool compareArrays(int inArray1[], int inArray2[]){
    if(inArray1 == inArray2){
        return true;
    }
    else{
        return false;
    }
}

/*Function to compare two arrays to see if equal
* Inputs: two integer arrays
* Output: bool, whether arrays equal
*/
/*
bool compareArrays(int inArray1[], int inArray2[]){
    bool equal = true;
    for (int i = 0; i < 3; i++){
        if ( inArray1[i] != inArray2[i]){
            equal = false;
        }
    }
    return equal;
}*/

/*Function to compare two arrays to see if equal, VERSION 2!!
* Inputs: two integer arrays AND array size
* Output: bool, whether arrays equal
*/
bool compareArrays(int inArray1[], int inArray2[], int size){
    bool equal = true;
    for (int i = 0; i < size; i++){
        if ( inArray1[i] != inArray2[i]){
            equal = false;
        }
    }
    return equal;
}

/*Function to find minimum of array of integers
* Input: integer array
* Output: integer
* Assumptions: array sized explicitly with const SIZE; SIZE > 1*/
int findMin(int inputArray[], int arraySize){
    int min = inputArray[0];
    for (int i = 1; i < arraySize; i++){
        if (inputArray[i] < min){ 
            min = inputArray[i];
        }
    }
    return min;
}