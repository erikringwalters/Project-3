#include "Substrings.h"

//Definition of default constructor
Substrings::Substrings()
{
	noXcounter = CountHi2Counter = CountHi2Sum = allStarCounter = CountAbcCounter = 0;
}

//Definition of noX
string Substrings::noX(string str)
{
	int i = noXcounter;
	if (i == str.length())//base case
	{
		noXcounter = 0;
		return str;
	}
	if (str[i] == 'x'|| str[i] == 'X')
	{
		str.erase(i, 1);
	}
	else
	{
		noXcounter++;
	}
	return noX(str);
}

//Definition of countHi2
int Substrings::countHi2(string str)
{
	int foundHi = 0;
	int i = CountHi2Counter;
	if (i == 0)
	{
		CountHi2Counter = CountHi2Sum = 0;
	}
	if (i >= str.length())//base case: if index is at end of str
	{
		return 0;
	}
	if (str[i] == 'h' && str[i -1] != 'x')//if land on an 'h' check if the one before is 'x'
	{
		if(str[i+ 1] == 'i')//then check if the one after is 'i'
		{
			foundHi++;
			i++; //puts i where the letter 'i' is in 'hi' so that it will automatically go passed in next statement
		}
	}
	CountHi2Counter++;
	return countHi2(str) + foundHi;
}
//Definition of allStar
string Substrings::allStar(string str)
{
	int i = allStarCounter;
	if (i >= str.length() - 1)//base case (if reaches end of string)
	{
		return str;
	}
	if (str[i] != '*')
	{
		str.insert(i+1,1,'*');
	}
	allStarCounter++;
	return allStar(str);
}

//Definition of countAbc
int Substrings::countAbc(string str)
{
	int i = CountAbcCounter;
	if(i == str.length())//base case
	return countAbc(str)+CountAbcCounter;
}