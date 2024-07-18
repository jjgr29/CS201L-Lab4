// CS201L-Lab4-FileIO.cpp : This file contains the 'main' function.  
// NAME:
// DATE:
// PROJECT: CS201L-Lab4-FileIO Read a *.csv file and output the best basketball team

#include "Functions.h"

int main()
{
    cout << "My Team is the BEST!!\n";

    ifstream inputFile("playerStatsPro.csv");
    ofstream errorFile("errors.txt");
    ofstream reportFile("report.txt");
    vector<BBPlayer> players;

    //add calls here

    inputFile.close();
    errorFile.close();
    reportFile.close();

    return 0;
}
 
