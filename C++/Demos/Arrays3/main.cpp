/*  Author: Jo Crandall
    CPSC 121 Array Basics 3 (Example 25)
    Oct 22, 2021
    Gonzaga University
    This program demonstrates command line args, min value of array, and comparing two arrays.
*/

#include "arrayTools.h"


/// Up til now we have written main as a void-argument function. We will now use COMMAND LINE ARGUMENTS...back to that in a moment
int main(int argc, char* argv[]){

    /// Let's try to compare two arrays to see if equal with different versions of compareArrays function
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {1, 2, 3};
    bool equal = compareArrays(arr1, arr2);
    if (equal){
        cout << "Equal arrays!" << endl;
    }
    else{
        cout << "Arrays not equal!" << endl;
    }
    

    /// But that version of array is set to specifically compare 3-element arrays
    int arr4[] = {5,6,7,8};
    int arr5[] = {5,6,7,9};
    /*
    if(compareArrays(arr4, arr5)){
        cout << "Equal arrays!" << endl;
    else{
        cout << "Arrays not equal!" << endl;
    }
    */

    /// This version allows any size array
    /*
    if(compareArrays(arr4, arr5, 4)){
        cout << "Equal arrays!" << endl;
    }
    else{
        cout << "Arrays not equal!" << endl;
    }
    */

    /// Let's try to find the min value in one of these arrays
    int arr6[] = {23, 24, 20, 21};
    //cout << findMin(arr6) << endl;    /// what are the expected arguements of findMin()?

    /// Note that we passed in an integer argc and an ARRAY argv[]
    /// Argc holds the NUMBER of arguments that appeared on the command line statement to run this program
    /// Argv[] holds the arguments themselves. 

    /// Let's see what's in argc:
    //cout << argc << endl;
    /// we can add arguments to the command line and check again......

    /// Let's see whats in those arguments:
    //cout << argv[0] << endl;
    //cout << argv[1] << endl;
    //cout << argv[2] << endl;
    
    /// Command line args can be used to specify how a program runs, what mode, or what data it uses:
    /*string mode1 = "student";
    if (argv[1] == mode1){
        cout << "This program is now running in student mode....whatever that means" << endl;
    }*/

    /// Now let's use a function to find the min of a list of nums (input from command line):
    /// Write the prototype is in the header and the definition is in the implementation file
    /// Before we try using command line args, let's test our findMin() function
    int testArray[] = {42, 45, 0, -7, 15};   /// note implicit sizing here
    const int SIZE = argc - 1;                   /// when using the argv[] array, the size of the array is one less than argc. WHY?
    
    //cout << "Min is: " << findMin(testArray, SIZE) << endl;

    /// Now let's try to find the min of a list of values from the command line:
    /*
    int argArray[SIZE];
    for (int i = 1; i <= SIZE; i++){
        argArray[i-1] = stoi(argv[i]);     /// stoi() is a function that turns a string into an integer
        cout << argArray[i-1] << ' ';
    }
    cout << endl;
    cout << "Min is: " << findMin(argArray, SIZE) << endl;
    */
    

    return 0;
}

