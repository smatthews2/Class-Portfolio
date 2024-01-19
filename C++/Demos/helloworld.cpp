/*  Author: Jo Crandall
    CPSC 121 Hello World (Example 2)
    Sept 8, 2021
    Gonzaga University
    This is a comment block to communicate to myself and other programmers essential info about this program.
    This program displays Hello World! to the screen.
*/


/// Triple ///'s are plain comments. Double //'s are lines of code for you to un-comment.


#include <iostream>
//#include <string>
using namespace std;

int main(){
    cout << "Hello World!" << endl; /// cout and endl are what require the #include and namespace above
    /// I can put a comment anywhere in my program

    /// Try without using endl:
    //cout << "Hello World!";

    /// Try without using quotes:
    //cout << Hello World!;

    /// declare a string variable to hold name user will enter:
    string inputName;
    cout << "What's your name?" << endl;
    cin >> inputName;
    cout << inputName << endl;
    
    /// declare an integer variable to hold number user will enter:
    int inputNum;
    cout << "What's your favorite number?" << endl;
    cin >> inputNum;

    /// string together multiple outputs:
    cout << "So, your name is " << inputName << " and your number is " << inputNum <<endl;



    return 0;
}