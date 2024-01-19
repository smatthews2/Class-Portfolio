/// This is a header file for Programming Assignment 6: MVP
/// You will need to ADD to this file.

#ifndef MVP_H
#define MVP_H

#include <iostream>
using namespace std;

/// FUNction prototypes
void loadTeam(int, double curr[]);   /// makes a decision about which team to "setCurrent"
void setCurrent(const double arr[], double curr[]);   /// called inside the loadTeam() function, assigns the specified team array to the "current" array
double computeAvgScore(double curr[]); // calculates the average score for a given team, provided by "loadTeam"
double computeOverallHighScore(double curr[]); // calculates the average scores for all teams, finding the highest average.
double determineHighScore(double curr[]); // picks the highest value for a given team, provided by "loadTeam"
double determineOverallHighScore(double curr[]); // finds the MVP and provides his position/team number. 


#endif

