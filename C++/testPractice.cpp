#include <iostream>

using namespace std;

int add(int), fac(int);
void nameReverse(char*);
bool linearSearch(int[], int), whileLinSearch(int[], int), myisAlpha(char);
char mytoUpper(char);

int main(int argc, char* argv[]){
    int array[5] = {0,1,2,3,4};
    char ch = 'a';
    cout << add(5) << endl;
    cout << fac(6) << endl;
    nameReverse(argv[1]);
    if(linearSearch(array, 2)){
        cout << "It works!" << endl;
    }
    if(whileLinSearch(array, 2)){
        cout << "It also works!" << endl;
    }
    if(myisAlpha(ch)){
        cout << mytoUpper(ch) << endl;
    }
}

int add(int limit){
    int total = 0;

    if(limit >= 2){
        for(int i = 0; i <= limit; i++){
            total += i;
        }    
    }
    else{
        cout << "Invalid number.\n";
        exit(EXIT_FAILURE);
    }

    return total;
}

int fac(int limit){
    int total = limit;

    if(limit >= 2){
        for(int i = 1; i < limit; i++){
            total *= i;
        }    
    }
    else{
        cout << "Invalid number.\n";
        exit(EXIT_FAILURE);
    }

    return total;
}

void nameReverse(char* name){
    for(int i = sizeof(name); i >= 0; i--){
        cout << name[i];
    }
    cout << endl;
}

bool linearSearch(int arr[], int tar){
    for(int i = 0; i < 5; i++){
        if(arr[i] == tar){
            return true;
        }
    }
    return false;
}

bool whileLinSearch(int arr[], int tar){
    int pos = 0, limit = 5;
    while(pos < limit){
        if(arr[pos] == tar){
            return true;
        }
        pos++;
    }
    return false;
}

bool myisAlpha(char ch){
    switch(ch){
        case 65 ... 122:
            return true;
        default:
            return false;
    }
}

char mytoUpper(char ch){
    switch(ch){
        case 97 ... 122:
            return ch - 32;
        default:
            return ch;
    }
}