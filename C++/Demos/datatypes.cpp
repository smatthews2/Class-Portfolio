/*  Author: Jo Crandall
    CPSC 121 Data Types & Variables (Example 3)
    Sept 10, 2021
    Gonzaga University
    This program explores examples of variables and data types. Note that variable naming conventions should be followed.
*/

#include <iostream>
//#include <string>
using namespace std;

int main(){
    
    /// primitive data types and their sizes (on YOUR machine)
    /// char
    cout << sizeof(char) << endl;
    char myChar = 'b';
    
    /// integer types
    //cout << sizeof(int) << endl;
    //cout << sizeof(unsigned) << endl;
    //cout << sizeof(long) << endl;

    /// floating point types
    //cout << sizeof(float) << endl;
    //cout << sizeof(double) << endl;
    
    /// bool - true/false
    //cout << sizeof(bool) << endl;

    /// string - actually a class, not a primitive data type
    //cout << sizeof(string) << endl;

    /// naming conventions - note, Camel case and Pascal case most commonly used in code body
    /// camel case
    string myStringVariable;

    /// Pascal case
    int MyIntVariable;

    /// snake case
    char my_char_variable;

    /// macro case
    double MY_DOUBLE_VARIABLE;


    return 0;
}