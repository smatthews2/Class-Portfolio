#include <iostream>
#include <vector>
using namespace std;

int scoreAverage(vector<int>);
void makeDiffArray(vector<int>);

int main(){
    vector<int> classScores {34, 33, 36, 32, 31, 33, 15, 30, 27, 28, 26, 30};
    makeDiffArray(classScores);
}

int scoreAverage(vector<int> inVec){
    int totalAverage = 0, i;
    for(i = 0; i < inVec.size(); i++){
        totalAverage = totalAverage + inVec[i]; // First, we get the total.
    }
    totalAverage /= inVec.size(); // Then, we make it an average.
    return totalAverage;
}

void makeDiffArray(vector<int> inVec){
    int diffArray[inVec.size()], i;
    for(i = 0; i < inVec.size(); i++){
        diffArray[i] = abs(scoreAverage(inVec) - inVec[i]);
        cout << diffArray[i] << " ";
    }
    cout << endl;
}
