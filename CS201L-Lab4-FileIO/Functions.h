#pragma once
#pragma once
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct BBPlayer {
    string playerFirstName;
    string playerLastName;
    int games;
    float efg;
    int trb;
    int ast;
    int stl;
    int blk;
    int tov;
    int pts;
    int age;
    int years;
    string position;
    float effRating;  // This field is not loaded from the file
};
//PRE:  
//POST:
void loadVector(ifstream& in, ofstream& err, vector<BBPlayer>& bbPlayer);


//PRE:  
//POST:
void printTeam(ofstream& report, vector<BBPlayer>& bbPlayer);


//PRE:  
//POST:
void printVector(ofstream& report, vector<BBPlayer> bbPlayer);