#include "Substrings.h"
string Substrings::noX(string input)
{
	if (noXCounter == input.length())
	{
		return input;
	}
	if (input[noXCounter] == 'x')
	{
		input.erase(noXCounter);
	}
	noXCounter++;
	return noX(input);
}