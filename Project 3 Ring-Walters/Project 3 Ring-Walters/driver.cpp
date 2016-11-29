#include "Substrings.h"
using namespace std;
void main()
{
	Substrings a;
	string str = "thisXstringXhasX'sxinxitx";
	string newString = a.noX(str);
	cout << newString << endl;
	cout << "Counting 'hi' without 'x' prior: ";
	cout << a.countHi2("xhihihixhithisshouldcountto3")<< endl;
	cout << a.allStar("allStarFunction") << endl;
}