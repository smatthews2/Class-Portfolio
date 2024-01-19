#include <iostream>
using namespace std;

void display(int, int, int);
int power(int,int);

int main(){
    int x, cols, pow;
    cout << "How many numbers would you like to display?\n";
    cin >> x;
    if (x < 0){
        cout << "Invalid number amount.\n";
        return 0;
    }
    cout << "Along how many columns?\n";
    cin >> cols;
    if (cols < 0){
        cout << "Invalid column amount.\n";
        return 0;
    }
    cout << "Enter a power.\n";
    cin >> pow;
    if (pow < 0){
        cout << "Invalid exponent.\n";
        return 0;
    }
    system("clear");
    display(x, cols, pow);
    return 0;
}

void display(int x, int cols, int pow){
    for(int i = 1; i <= x; i++){
        cout << power(i,pow) << "\t";
        if(0 == i % cols){
            cout << endl;
        }
    }
}

int power(int x,int y){
    int total = 1;
    for(int i = 0; i < y; i++){
        total *= x;
    }
    if (y == 0){
        total = 1;
    }
    return total;
}