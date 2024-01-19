/*  Author: Jo Crandall
    CPSC 121 Function Basics 3 (Example 18)
    Oct 11, 2021
    Gonzaga University
    This program demonstrates variable scope, const, and static.
*/

#include <iostream>
using namespace std;

void myFunc(void);
void myOtherFunc(void);
bool yetAnotherFunc(void);
int theLastFunc(void);

int globalInt = 0;                      /// because these two variables are defined outside main(), they are GLOBAL variables
const double GLOBAL_CONST = 3.14;

int main(){

    /// global vars can be seen within any of the functions (but beware of variables with same name that have block scope)
    
    cout << "Here's the value of globalInt: " << globalInt << endl;
    myFunc();  /// this function changes the value of globalInt
    cout << "Now here's the value of globalInt: " << globalInt << endl;

    myOtherFunc();     /// this function creates the variable localInt
    //cout << "The value of localInt is: " << localInt << endl;

    /// Global constants can also be seen inside any function, but they CANNOT be changed by the code during runtime.
    bool flag = yetAnotherFunc();
    cout << "GLOBAL_CONST is 3.14? " << flag << endl;

    /// Variables and their values are destroyed between function calls, but a STATIC variable can have its value remembered
    cout << "staticInt has: " << theLastFunc() << endl;
    cout << "staticInt has: " << theLastFunc() << endl;
    cout << "staticInt has: " << theLastFunc() << endl;
    cout << "staticInt has: " << theLastFunc() << endl;

    return 0;
}

//This function sets the value of globalInt to 100.
void myFunc(void){
    globalInt = 100;
}

//This function sets the value of localInt to 42.
void myOtherFunc(void){
    /// A variable defined inside a function is a LOCAL VARIABLE
    /// It can only be seen inside that function
    int localInt = 0;
    cout << "Here's the value of localInt: " << localInt << endl;
    localInt = 42;
    cout << "Now here's the value of localInt: " << localInt << endl;
}

bool yetAnotherFunc(void){
    if (GLOBAL_CONST == 3.14){
        return true;
    }
    else return false;
}

int theLastFunc(void){
    static int staticInt;
    staticInt++;
    return staticInt;
}