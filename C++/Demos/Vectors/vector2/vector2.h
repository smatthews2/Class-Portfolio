// Header file for vector 2

#ifndef VEC2_H
#define VEC2_H

#include <iostream>
#include <vector>
using namespace std;

void printVec(const vector<int> );
void fillVector(vector<int> & inVec);   /// we need to use pass by reference to see the vector changed back in main(0)
                                        /// this is because vectors don't use static memory addresses the same way arrays do
int sumVector(vector<int> inVec);
void destroyVec(vector<int> & inVec);

#endif