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
	void strCount();
private:
	int noXcounter;
	int CountHi2Counter, CountHi2Sum;
	int allStarCounter;
	int CountAbcCounter;
};