/*  Author: Jo Crandall
    CPSC 121 Array Basics 4 (Example 26)
    Oct 27, 2021
    Gonzaga University
    This program demonstrates const array parameters, 2-dimensional arrays, and 3-dimensional arrays.
*/

#include "moreTools.h"

int main(){

    int myArray[5] = {1, 2, 3, 4, 5};
    /// We'll send the array as an argument to the printElementsFunction
    printElements(myArray, 5);

    /// What happens if we change an array inside a function? Is it changed outside the function?
    //printElements(myArray, 5);
    addFour(myArray, 5);
    //printElements(myArray, 5);

    /// let's investigate a bit more
    //cout << "The array I see in main() is located at address: \t" << myArray << endl;
    //printAddress(myArray);

    
    /// 2-DIMENSIONAL arrays
    int twoDimArray[3][2];
    /// to access array elements, we now need both indexes
    twoDimArray[0][0] = 42;
    twoDimArray[1][1] = 13;
    //cout << twoDimArray[0][0] << endl;
    /// What about an element we haven't assigned yet?
    //cout << twoDimArray[0][1] << endl;      /// the contents of unassigned memory are unpredictable

    /// We can use nested for loops to assign all array elements
    /// we'll fill them with increasing integers
    int num = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            twoDimArray[i][j] = num++;
        }
    }
    /// Before we print it, draw what this matrix might look like...

   

    /// Now let's print it out with our function
    //print2dElements(twoDimArray, ROWS, COLS);

    //3-DIMENSIONAL arrays    (We can do n-dimensional arrays!!)
    char threeDimArray[X][Y][Z];
    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){
            for (int k = 0; k < Z; k++){
                threeDimArray[i][j][k] = 'a' + rand() % 26;
            }
        }
    }

    /// print the array 
    //print3dElements(threeDimArray, X, Y, Z);



    return 0;
}