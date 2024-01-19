/*  Author: Jo Crandall
    CPSC 121 Header File Example
    Oct 15, 2021
    Gonzaga University
    This file needs to be #included by the .cpp files that use its function declarations/prototypes.
*/

#ifndef MAXNUM_H
#define MAXNUM_H

//#include <iostream>
//using namespace std;

/// Note the use of default arguments and function overloading.
int maxNumber(int num1 = 9, int num2 = 13);
double maxNumber(double num1 = 42.1, double num2 = 3.14);

#endif