/*  Author: Jo Crandall
    CPSC 121 Function Basics (Example 16)
    Oct 8, 2021
    Gonzaga University
    This program demonstrates function basics: name, arguments, return type, declaration, implementation, calling.
*/

#include <iostream>
using namespace std;

/// option 1 - declare your function up front before main(), but save implementation for later (eventually we'll do this in a separate file)
void myFunction(void);  //this is a the function declaration (prototype), which the compiler needs up front

/// option 2 - define the entire function up front before main()
/*void myFunction(void){
        cout << "This is my function." << endl;
    }*/


int main(){

    myFunction();   //here I am CALLING (using) my function. If I don't do this, the function never does anything.

    return 0;
}

/// here is the funtion implementation (or function definition):
void myFunction(void){
        cout << "This is my function." << endl;
    }