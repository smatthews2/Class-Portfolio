#include <iostream>

using namespace std;

void swap(int data[], int idx1, int idx2), mystSort(int inArr[], int len);

int main(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        arr[i] = i;
        cout << arr[i] << ' ';
    }
    cout << endl;
    swap(arr, 0, 1);
    for(int i = 0; i < 4; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
    mystSort(arr, 4);
}

void swap(int data[], int idx1, int idx2){
    if(data[idx1] < data[idx2]){
        int tmp = data[idx1];
        data[idx1] = data[idx2];
        data[idx2] = tmp;    
    }
}

void mystSort(int inArr[], int len){
    int pass = 0, start = 0, btm = len - 1;
    bool shift = true;
    for(int i = 0; i < btm; i++){
        swap(inArr, start, start + 1);
        cout << inArr[i] << ' ';
        start++;
    }
    cout << endl;
}