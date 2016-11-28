#include "Substrings.h"

//Definition of default constructor
Substrings::Substrings()
{
	noXCounter = 0;
}

//Definition of noX
string Substrings::noX(string input)
{
	if (noXCounter == input.length() - 1)
	{
		return input;
	}
	if (input[noXCounter] == 'x'|| input[noXCounter] == 'X')
	{
		input.erase(noXCounter);
	}
	noXCounter++;
	return noX(input);
}
