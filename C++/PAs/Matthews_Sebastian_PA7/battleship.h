// Header file for PA7 Battleship!

#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <iostream>
#include <vector>
#include <unistd.h>  //for sleep()
using namespace std;

void printGrid(const char inArray[10][10]);
int displayMenu(void);
void checkField(vector<int>&);
void getCoordinates(vector<int>&);
void resetGrid(char inArray[10][10]);
bool checkHits(void);

#endif