/*  Author: Jo Crandall
    CPSC 121 Array Basics 2 (Example 24)
    Oct 20, 2021
    Gonzaga University
    This program demonstrates implicit sizing, lack of bounds checking, off-by-one issues, and array assignment.
*/

#include <iostream>
using namespace std;

int main(){

    /// Last time we used only explicit sizing, but can use implicit sizing as well:
    int myIntArray[] = {1,2,3,4};
    /// Let's try a for-loop to figure out how big the array actually is. 
    /*
    for (int i = 0; i < 20; i++){
        cout << myIntArray[i] << ' ';
    }
    cout << endl;
    */
    /// hmmmmmm

    /// Let's try sizeof()
    //cout << sizeof(myIntArray) << endl;
    /// Let's deduce the actual bounds of the array. We know each element is the same "size" data type, an int:
    //cout << "An int has " << sizeof(int) << " bytes" << endl;
    //cout << sizeof(myIntArray)/sizeof(int) << endl;
    /// Note that this trick will not work with every data type every time

    /// The fact that the program just kept printing values past the end of the array is evidence of *lack of BOUNDS CHECKING*
    /// Watch out for this!

    /// Lack of bounds checking can result in several versions of OFF-BY-ONE errors
    
    double myDoubleArray[5];
    /*
    for (int i = 0; i < 5; i++){      /// But it compiled....What did I do wrong?
        myDoubleArray[i] = 42.1 + i;
    }
    cout << endl;
    */
    /// Note that you can TRY to store data beyond the bounds of the array.... -> 'stack smashing'
    

    /// What's different between the previous loop and the next loop??
    /*
    for (int i = 0; i <=5; i++){
        cout << myDoubleArray[i] << ' ';
    }
    cout << endl;
    */
    /// So, we can READ beyond the bounds of an array, but we can't write beyond the bounds

    
    /// Another safe tool to access array elements is the RANGE-BASED FOR LOOP:
    /// Note, this is much more similar to array traversal as it is done in Python
    /*
    for (double num : myDoubleArray){
        cout << num << ' ';
    }
    cout << endl;
    */

    /// We may want to ASSIGN the contents of one array to another. Let's try this
    //int myIntArray1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //int myIntArray2[];                  ///implicit sizing doesn't behave if no values provided
    //myIntArray2 = myIntArray1;
    /// In order to assign contents, we work one element at a time, using a loop usually
    /*
    for (int i = 0; i < 10; i++){
        myIntArray2[i] = myIntArray1[i];
        cout << myIntArray2[i] << ' ';
        //cout << myIntArray1[i] << ' ';
    }
    cout << endl;
    */

    
    return 0;
}