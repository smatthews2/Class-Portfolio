/*  Author: Jo Crandall
    CPSC 121 Array Basics 1 (Example 23)
    Oct 18, 2021
    Gonzaga University
    This program demonstrates basic array structure and access
*/

#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>
using namespace std;

int main(){

    /// An array is a structure which can hold multiple data elements of the same type
    /// Array declaration and assignment(initialization)
    int myarray[5] = {42, 13, 8, 0, 600};     /// an array of integers that contains 5 elements
    string myStrArray[3] = {"cat", "dog", "lama"};   /// an array of strings that contains 3 elements


    /// We access individual array elements by their INDEX
    /// c++ uses zero indexing (counting starts at zero)
    //cout << myarray[0] << endl;
    //cout << myStrArray[2] << endl;

    //We can overwrite any of the values in the array using the index as well:
    //myarray[0] = 43;
    //cout << myarray[0] << endl;

    /// What if we want to print out ALL the elements of the array?
    /// Let's just try printing it out:
    //cout << myarray << endl;
    /// What happened?

    /// We use a loop to TRAVERSE the array and print out its contents
    /// What would that look like...???




    /// We don't always know all (or any) of the values that belong in array up front
    /// Here is partial initialization:
    char myCharArray[8] = {'a', 'b', 'c'};
    
    /// Use a loop to print out the contents of an array:
    /*
    for (int i = 0; i < 8; i++){
        cout << myCharArray[i] << ' ';
    }
    cout << endl;
    */

    /// What's in later elements of the array (after a, b, c...)
    //cout << myCharArray[6] << endl;

    /// let's just try and see what happens if we try to print the char array...   
    //cout << myCharArray << endl;
    /// Back in C this is how we dealt with strings ALL THE TIME. A string was just an array of characters.

    /// Notice that the reference to the whole array behaves the same as the reference to the FRONT element of the array
    //cout << "When printing the reference to the whole character array we get: \t" << myCharArray << endl;
    //cout << "When printing the reference to the front of the array we get: \t\t" << &myCharArray[0] << endl << endl;

    /// We can see comparable behavior with a numerical array too
    //cout << "When printing the reference to the whole numerical array we get: \t" << myarray << endl;
    //cout << "When printing the reference to the front of the array we get: \t\t" << &myarray[0] << endl;
    

    /// The partially initialized char array was filled with empty chars
    /// What happens if we partially initialize a numerical value array:
    /*
    double myDoubleArray[50] = {10, 9, 8, 7};
    for (int i = 0; i < 50; i++){
        cout << myDoubleArray[i] << ' ';
    }
    cout << endl;
    */

    /// Declare an array of bools:
    bool myBoolArray[3];
    //cout << myBoolArray[1] << endl;
    //cout << myBoolArray[2] << endl;

    /// Be careful when assigning to the array
    /// You can do lots of things that will COMPILE and RUN, but that are not what you INTEND!!!
    /*
    myCharArray[2] = 36;
    for (int i = 0; i < 8; i++){
        cout << myCharArray[i] << ' ';
    }
    cout << endl;
    */

    /*
    int myIntArray[50] = {0};
    myIntArray[46] = 'J';
    for (int i = 0; i < 50; i++){
        cout << myIntArray[i] << ' ';
    }
    cout << endl;
    */

    //But take a closer look at the output for our char and int arrays....hint: look at an ascii table

    /// Now let's combine File i/o with arrays!!! Yay!!!
    ifstream inFile;
    inFile.open("nums.txt");
    int numArray[50];     /// the fact that this array hasn't been initialized could give interesting results later...
    int numFromFile;
    int index = 0;
    while(inFile >> numFromFile){
        numArray[index] = numFromFile;
        index++;
    }
    
    for (int i = 0; i < 50; i++){
        cout << numArray[i] << " " << flush;
        usleep(150000);
    }
    cout << endl;
    

    return 0;
}