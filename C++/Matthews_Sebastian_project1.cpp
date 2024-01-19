/* Author: Sebastian Matthews
    CPSC 122 Project 1: Practice with Primes
    Jan 20, 2022
    Gonzaga University
    This program creates a grid of integers that are prime.
    To run, write: "./a.out [amount of primes] [amount of columns]".
*/

#include <iostream>
using namespace std;

void display(int, int);
void error(int);
bool isPrime(int);

int main(int numArgs, char* arrayArgs[]){
    system("clear");
    if(atoi(arrayArgs[1]) < 1 && atoi(arrayArgs[2]) >= 1){
        error(1);
    }
    if(atoi(arrayArgs[2]) < 1 && atoi(arrayArgs[1]) >= 1){
        error(2);
    }
    if(atoi(arrayArgs[2]) < 1 && atoi(arrayArgs[1]) < 1){
        error(3);
    }
    display(atoi(arrayArgs[1]), atoi(arrayArgs[2]));
}

void display(int totalPrimes, int cols){
    int amountOfPrimes = 0;
    for(int i = 1; amountOfPrimes < totalPrimes; i++){
        if(isPrime(i)){
            cout << i << "\t";
            amountOfPrimes++; 
            if(0 == amountOfPrimes % cols && amountOfPrimes != 0){
                cout << endl;
            }
        }    
    }
    if(totalPrimes % cols != 0){
        cout << endl;
    }   
}

void error(int x){
    switch(x){
        case 1:
            cout << "Insufficient value for number amount.\n";
            exit(EXIT_FAILURE);
        case 2:
            cout << "Insufficient value for column amount.\n";
            exit(EXIT_FAILURE);
        case 3:
            cout << "Insufficient values for both column and number amount.\n";
            exit(EXIT_FAILURE);
    }

}

// This function determines whether or not a given number is prime or not.
bool isPrime(int n){
    if (n == 2 || n == 3){
        return true;
    }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0){
        return false; 
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }  
    }
    return true;
}