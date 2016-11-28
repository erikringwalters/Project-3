#include "Substrings.h"

//Definition of default constructor
Substrings::Substrings()
{
	noXCounter = 0;
}

//Definition of noX
string Substrings::noX(string input, int counter)
{
	if (counter == input.length() - 1)
	{
		return input;
	}
	if (input[counter] == 'x'|| input[counter] == 'X')
	{
		input.erase(counter);
	}
	else
	{
		counter++;
	}
	return noX(input,counter);
}

//Definition of countHi2
int Substrings::countHi2()
{

}