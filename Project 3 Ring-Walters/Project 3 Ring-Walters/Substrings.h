#pragma once
#include <iostream>
#include <string>
using namespace std;
class Substrings
{public:
	Substrings();
	string noX(string str);
	int countHi2(string str);
	string allStar(string str);
	int countAbc(string str);
	int strCount(string str, string lookFor);
private:
	int noXcounter;
	int CountHi2Counter;
	int allStarCounter;
	int CountAbcCounter;
};