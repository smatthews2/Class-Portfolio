/*  Author: Sebastian Matthews
    CPSC 121 PA1: Hello
    Sept 12, 2021
    Gonzaga University
    This program greets the user by saying my name and asks them their name, then says "Nice to meet you, [name]."
*/
#include <iostream>
using namespace std;

int main(){

    cout << "Hello, my name is Sebastian."<< endl; //Introductory phrase.
    string userName;
    cout << "What's your name?" << endl; //Asks the user their name.
    cin >> userName;
    cout << "Nice to meet you, " << userName << "." << endl; //Declares the user's name.
    return 0;
}