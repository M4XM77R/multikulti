#include <iostream> 
using namespace std;

int primeCheck()
{
	int n;
	char againCheck = ' ';
	bool isPrime = true;
	system("cls");
	cout << "Enter a positiv Integer: ";
	cin >> n;

	if (n <= 1)
		isPrime = false;
	else
	{
		for (int i = 2; i <= n / 2; i++)
		{
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}

	}
	if (isPrime)
		cout << n << " is a prime";
	else
		cout << n << " is not a prime";
	cout << endl;
	cout << "Do you want to check for another number (y/n): ";
	cin >> againCheck;
	if (againCheck == 'y')
		primeCheck();
	return 0;
}
