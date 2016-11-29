#include "Substrings.h"
using namespace std;
void main()
{
	Substrings a;
	string str = "thisXstringXhasX'sxinxitx";
	string newString = a.noX(str, 0);
	cout << newString << endl;
	cout << "Counting 'hi' without 'x' prior: ";
	a.countHi2("xhihihixhithisshouldcountto3", 0);

}