#pragma once
#include <iostream>
#include <string>
using namespace std;
class Substrings
{public:
	Substrings();
	string noX(string str, int counter);
	int countHi2(string str, int i);
	string allStar(string str);
	void countAbc();
	void strCount();
private:
	int CountHi2Counter;
	int allStarCounter;
};