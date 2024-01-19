/*  Author: Jo Crandall
    CPSC 121 Function Basics 2 (Example 17)
    Oct 8, 2021
    Gonzaga University
    This program demonstrates function basics: name, arguments, return type, declaration, implementation, calling.
*/

#include <iostream>
#include <fstream>
using namespace std;

int doubleFileInput( string fileName );

int main(){

    //function to square an integer and print result to screen - 1 arg, void return type

    //function to take a filename as a string and return something read from file - 1 arg, return type?

    doubleFileInput("nums.txt");
    
    //function to add two nums and print sum to screen - 2 args, void return type


    //function to subtract two nums and return difference - 2 args, double return type




    return 0;
}

int doubleFileInput( string fileName ){
    ifstream inFile;
    int inNum, doubleNum = -1;
    inFile.open(fileName);
    while (inFile >> inNum){
        doubleNum = inNum * 2;
        cout << inNum << " doubled is " << doubleNum << endl;
    }
    if (!inFile){
        cout << "No int to read from file: " << fileName << endl;
        inFile.close();
    }
    return doubleNum;
}