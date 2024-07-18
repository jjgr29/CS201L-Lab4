#include "Functions.h"

bool isDigits(string str) {
    return str.find_first_not_of("0123456789.") == string::npos;
}

void loadVector(ifstream& in, ofstream& err, vector<BBPlayer>& bbPlayer) {}

void printTeam(ofstream& report, vector<BBPlayer>& bbPlayer) {}

void printVector(ofstream& report, vector<BBPlayer> players) {}