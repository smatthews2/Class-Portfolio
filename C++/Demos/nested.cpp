/*  Author: Jo Crandall
    CPSC 121 Loops - Nested Loops (Example 12)
    Sept 29, 2021
    Gonzaga University
    This program demonstrates loops.
*/

#include <iostream>
#include <chrono>   /// for chrono::steady_clock::now() to clock runtime below
using namespace std;

int main(){

    /// declare variables
    
    int i, j, m, x;

    /// nested for loop:
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 5; k >1; k--){
                cout << "i, j, k: " << i << ' ' << j << ' ' << k << "\n";
            }
        }
    }
    /// what do you expect to print?
    /// how many lines will be printed out (exactly or roughly)?
    /// what can you infer about the runtime complexity of any nested for loop?

    /// variations to the basic argument structure of a for loop header:

    /// multiple initializations
    /*for (i=0, j=0; i < 3; i++){
        cout << "i, j: " << i << ' ' << j << "\n";
    }*/

    /// multiple increment/decrement
    /*for (i=5, j=5; i > 0; i--, j--){
        cout << "i, j: " << i << ' ' << j << "\n";
    }*/

    /// multiple test statements
    /*for (i=5, j=5; i > 0 && j > 2; i--, j--){
        cout << "i, j: " << i << ' ' << j << "\n";
    }*/

    /// omitted increment/decrement
    /*for (i=5; i > 0;){
        cout << "i : " << i << "\n";
    }*/

    /// omitted initialization
    m = 1;
    /*for (;m > 0;){
        cout << "m : " << m << "\n";
    }*/

    /// omitted test condition
    /*for (;;m++){
        cout << "m : " << m << "\n";
    }*/

    /// another way to gain insight into time complexity is to do the same thing with and without printing every time...
    /// code resource used:  https://www.techiedelight.com/measure-elapsed-time-program-chrono-library/

    /// with printing each time
    /*auto begin = chrono::steady_clock::now(); /// record the time when we start
    for (; m < 1000000; m++){
        cout << "m : " << m << "\n";
    }
    auto end = chrono::steady_clock::now();  /// record the time when we stop
    cout << "time in milliseconds " << chrono::duration_cast<chrono::milliseconds>(end - begin).count() << endl; /// compute and print difference between stop and start time
    */

    /// without printing each time
    /*auto begin = chrono::steady_clock::now(); /// record the time when we start
    for (m = 1; m < 1000000; m++){ x = 1; }
    cout << "m : " << m << "\n";
    auto end = chrono::steady_clock::now();  /// record the time when we stop
    cout << "time in milliseconds " << chrono::duration_cast<chrono::milliseconds>(end - begin).count() << endl;  /// ompute and print difference between stop and start time
    */

    return 0;
}