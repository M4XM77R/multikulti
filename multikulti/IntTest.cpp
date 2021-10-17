#include "IntTest.h"
bool IntTest()
{
	int i = 0;
	system("cls");
	while (true)
	{
		system("color 0a");
        std::cout << i << std::endl;
        bin(i);
		i++;
        std::cout << std::endl;
	}
	return true;
}

void bin(int n)
{
    int i;
    std::cout << "0";
    for (i = 1 << 30; i > 0; i = i / 2)
    {
        if ((n & i) != 0)
        {
            std::cout << "1";
        }
        else
        {
            std::cout << "0";
        }
    }
}