// this is a C++ translation of the old 10 PRINT C64 BASIC program
#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

int main()
{
	srand((unsigned)time(0));
	int charType;

	while(1)
	{
		charType = 0 + rand() % (1 - 0 + 1);

		// ascii implementation
		if(charType == 0)
			cout << "\\";
		else
			cout << '/';

		Sleep(1);// you need Windows.h for this one
	}// end while
}