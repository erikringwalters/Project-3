#include "Substrings.h"

//Definition of default constructor
Substrings::Substrings()
{
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
	int counter;
	if (i == 0)
	{
		counter = 0;
	}
	if (i == str.length())//base case: if index is at end of str
	{
		return counter;
	}
	if (str[i] == 'h' && str[i -1] != 'x')//if land on an 'h' check if the one before is 'x'
	{
		if(str[i+ 1] == 'i')//then check if the one after is 'i'
		{
			counter++;
		}
	}
	i++;
	return countHi2(str, i) + counter;
}