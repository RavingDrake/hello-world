// Lab00.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int counter;

	for (counter = 100; counter > 1; --counter)
	{
		if (counter / 2)
		{
			cout << counter;

			if (counter != 2)
			{
				cout << ',';
			}
		}
	}

    return 0;
}

