#include <iostream>
#include <string>
#include <cstdlib>
#include "funcs.h"

int main()
{

std::string text;
double num1, num2;
char choice;

std::cout << "������ ��ࢮ� �᫮:";
std::cin >> text;
num1 = strtod(text.c_str(),NULL);
std::cout << "������ ��஥ �᫮:";
std::cin >> text;
num2 = strtod(text.c_str(),NULL);
std::cout << "�롥�� ����⢨�.\n1 - ᫮�����.\n2 - ���⠭��.\n3 - 㬭������.\n4 - �������.\n";
std::cout << "������ 1, 2, 3 ��� 4 � ������ Enter:";
std::cin >> text;
choice = strtod(text.c_str(),NULL);
switch (choice)
    {
    case 1:
        std::cout << addition(num1, num2);
        break;
    case 2:
        std::cout << "�㭪�� � ࠧࠡ�⪥.";
        break;
    case 3:
        std::cout << "�㭪�� � ࠧࠡ�⪥.";
        break;
    case 4:
        std::cout << "�㭪�� � ࠧࠡ�⪥.";
        break;
    default:
        std::cout << "��� ⠪�� �������.";
    }
std::cin.get();
return 0;
}

