#include "euler.h"

void Euler()
{
	double a = 0;
	double b = 0;
	double c = 0;
	
	system("cls");
	while (true)
	{
		b = 1 + 1 / a;
		if (a == 10000000)
		{
			std::cout << pow(b, a) << std::endl;
			break;
		}

		a++;
	}
}
