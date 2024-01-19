#include <iostream>
using namespace std;

int main(){
    int myArray[4][2] = {{0,1},{2,3},{4,5},{6,7}}, i;
    for(int* x: myArray){
        for (i = 0; i < 2; i++){
            cout << x[i] << " ";
        }
        cout << endl;
    }
    return 0;
}