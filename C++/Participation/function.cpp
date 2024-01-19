/* Author: Sebastian Matthews
    CPSC PA2: Codenames
    October 8, 2021
    Gonzaga University
    This program demonstrates the use of functions.
*/

#include <iostream>
using namespace std;

void tripleNum(int);
int squareNum(int);
string getName(void);

int main(){
    tripleNum(3);
    int square = squareNum(10);
    cout << square << endl;
    getName();
    return 0;
}

void tripleNum(int x){
    int tripledNum = x * 3;
    cout << tripledNum << endl;
}

int squareNum(int y){
    int squaredNum = y * y;
    return squaredNum;
}

string getName(void){
    string userName;
    cout << "What's your name?" << endl;
    cin >> userName;
    cout << "Nice name, " << userName << "." << endl;
    return userName;
}