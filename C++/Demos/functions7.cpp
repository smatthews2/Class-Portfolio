/*  Author: Jo Crandall
    CPSC 121 Function Basics 7 (Example 22)
    Oct 15, 2021
    Gonzaga University
    This program demonstrates driver programs.
*/

#include "maxnum.h"
#include <iostream>
using namespace std;

/// Note the use of default arguments and function overloading.
//int maxNumber(int num1 = 9, int num2 = 13);
//double maxNumber(double num1 = 42.1, double num2 = 3.14);

//This is a driver to test the maxNumber() function.
int main(){

    //Test maxNumber with two negative ints
    cout << maxNumber(-2,-3) << endl;

    //Test maxNumber with one positive and one negative int

    //Test maxNumber with default args

    //Test maxNumber with one double arg



    return 0;
}

/*This function accepts two integers and returns the larger of the two.
* (If the integers are equal, the first value is returned)
* Default args: num1 = 9, num2 = 13.*/
/*int maxNumber(int num1, int num2){
    if (num1 >= num2){
        return num1;
    }
    else return num2;
}*/

/*This function accepts two doubles and returns the larger of the two.
* (If the doubless are equal, the first value is returned)
* Default args: num1 = 42.1, num2 = 3.14.*/
//double maxNumber(double num1 = 42.1, double num2 = 3.14);
