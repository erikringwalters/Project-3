#include "Substrings.h"

//Definition of default constructor
Substrings::Substrings()
{
	CountHi2Counter = 0;
}

//Definition of noX
string Substrings::noX(string str, int counter)
{
	if (counter == str.length())//base case
	{
		return str;
	}
	if (str[counter] == 'x'|| str[counter] == 'X')
	{
		str.erase(counter, 1);
	}
	else
	{
		counter++;
	}
	return noX(str,counter);
}

//Definition of countHi2
int Substrings::countHi2(string str, int i)
{
	if (i == 0)
	{
		CountHi2Counter = 0;
	}
	if (i == str.length())//base case: if index is at end of str
	{
		return CountHi2Counter;
	}
	if (str[i] == 'h' && str[i -1] != 'x')//if land on an 'h' check if the one before is 'x'
	{
		if(str[i+ 1] == 'i')//then check if the one after is 'i'
		{
			CountHi2Counter++;
			i++; //puts i where the letter 'i' is in 'hi' so that it will automatically go passed in next statement
		}
	}
	i++;
	return countHi2(str, i) + CountHi2Counter;
}