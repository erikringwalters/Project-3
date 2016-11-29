#include "Substrings.h"

//Definition of default constructor
Substrings::Substrings()
{
	noXCounter = 0;
}

//Definition of noX
string Substrings::noX(string input, int counter)
{
	if (counter == input.length())//base case
	{
		return input;
	}
	if (input[counter] == 'x'|| input[counter] == 'X')
	{
		input.erase(counter, 1);
	}
	else
	{
		counter++;
	}
	return noX(input,counter);
}

//Definition of countHi2
int Substrings::countHi2(string str, int i)
{
	if(i == )
	return 0;
}