/*  Author: Jo Crandall
    CPSC 121 Math Operations (Example 5)
    Sept 13, 2021
    Gonzaga University
    This program explores examples of mathematical operations with various data types.
*/

#include <iostream>
#include <iomanip>    /// for setprecision(), setw()
#include <cmath>      /// for mathematical functions (see below), including M_PI
using namespace std;

int main(){

    /// multiple assignment
    int a;
    int b;
    int c;
    a = b = c = 42;
    cout << c << endl;
    
    int e, f, g;
    e = 42;
    f = g = 8;
    //cout << e + g << endl;

    double h = 100, i = 212, j = 38, k = 4,
        l = 9999, m = 348, n = 19, o = 331;
    //cout << h + k + n << endl;

    /// combined assignment
    e += g;  /// same as e = e + g;
    f *= 2;  /// same as f = f * 2;
    /// what about?:
    e = e - 2;
    g = g / 3;
    a = a % 13;


    /// formatting output: setprecision for number of sig figs, setw for amount of space to use
    /// setw()
    //cout << "I love C++" << endl;
    //cout << setw(50) << "I love C++" << endl;

    /// setprecision()   default = 6 sig figs
    //cout << 154.13 / 68.73 << endl;
    //cout << setprecision(3) << 154.13 / 68.73 << endl;

    /// more cmath functions
    /// sine
    //cout << sin(M_PI / 2) << endl;

    /// cosine

    /// tangent

    /// square root
    //cout << sqrt(9) << endl;

    /// exponential

    /// natural log = log base e
    //cout << log(1) << endl;
    //cout << log(exp(1)) << endl;

    /// log base 10
    //cout << log10(100) << endl;

    

    /// Being able to generate random numbers can be very helpful:
    /// rand()
    int randNum = rand();
    //cout << randNum << endl;     /// Run the program multiple times...

    
    srand(25);
    cout << rand() << endl;
    //cout << rand() << endl;

    unsigned seed = time(0);
    srand(seed);
    //cout << rand() << endl;
    //cout << rand() << endl;

    /// to get numbers between 1 and 10:
    //cout << 1 + rand() % 10 << endl;

    return 0;
}