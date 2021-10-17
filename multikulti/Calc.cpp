#include "Calc.h"
#define pause system("pause");
#define clear system("cls");
void Calc()
{
    char op = ' ';
    double num1 = 0;
    double num2 = 0;
    std::cout << "Gib die erste Zahl an: ";
    std::cin >> num1;
    clear
        std::cout << "Welchen Operator: ";
    std::cin >> op;
    clear
        std::cout << "Gib die zweite Zahl an: ";
    std::cin >> num2;
    clear
        switch (op)
        {
        case ('+'):
            std::cout << num1 << op << num2 << " = " << num1 + num2 << std::endl;
            break;

        case ('-'):
            std::cout << num1 << op << num2 << " = " << num1 - num2 << std::endl;
            break;

        case ('*'):
            std::cout << num1 << op << num2 << " = " << num1 * num2 << std::endl;
            break;

        case ('/'):
            if (num2 != 0)
            {
                std::cout << num1 << op << num2 << " = " << num1 / num2 << std::endl;
            }
            break;
        default:
            std::cout << "Es wurde kein g\x81ltiger Operator angegeben\n\n\n";
            break;
        }
}