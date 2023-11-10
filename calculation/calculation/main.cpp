#include <iostream>
#include <string>
#include <cstdlib>
#include "funcs.h"

int main()
{

std::string text;
double num1, num2;
char choice;

std::cout << "Введите первое число:";
std::cin >> text;
num1 = strtod(text.c_str(),NULL);
std::cout << "Введите второе число:";
std::cin >> text;
num2 = strtod(text.c_str(),NULL);
std::cout << "Выберите действие.\n1 - сложение.\n2 - вычитание.\n3 - умножение.\n4 - деление.\n";
std::cout << "Напишите 1, 2, 3 или 4 и нажмите Enter:";
std::cin >> text;
choice = strtod(text.c_str(),NULL);
switch (choice)
    {
    case 1:
        std::cout << addition(num1, num2);
        break;
    case 2:
        std::cout << "Функция в разработке.";
        break;
    case 3:
        std::cout << "Функция в разработке.";
        break;
    case 4:
        std::cout << "Функция в разработке.";
        break;
    default:
        std::cout << "Нет такой команды.";
    }
std::cin.get();
return 0;
}

