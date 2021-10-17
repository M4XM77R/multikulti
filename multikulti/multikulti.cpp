#include <iostream>
#include <math.h>
#include "Donut.h"
#include "prime.h"
#include "IntTest.h"
#include "euler.h"
#include "Calc.h"


int main()
{
	system("title Super cool app");
	char Input = ' ';
	std::cout << "What do you want to do:\n(1)Donuts\n(2)Primes\n(3)Int Test\n(4)Eulers number approx.\n(5)Calc\n(q)Quit\n\n\nInput: ";
	std::cin >> Input;
	switch (Input)
	{
		case('1'):
			donut();
			break;
		case('2'):
			primeCheck();
			break;
		case('3'):
			IntTest();
			break;
		case('4'):
			Euler();
			break;
		case('5'):
			Calc();
			break;
		case('q'):
		default:
			break;
	}
	system("pause");
	return 0;
}
