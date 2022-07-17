#include <iostream>
#include "HeaderPracticalTask4.h"

int main()
{
	system("chcp 1251");

	//Практика 4, задание 1
	double a, b, c, x1 = 0, x2 = 0;
	std::cout << "Введите через пробел коэффициенты квадратного уравнения (a, b, c):\n";
	std::cin >> a >> b >> c;
	switch (Myroot(a, b, c, x1, x2))
	{
	case(1):
		std::cout << "Квадратное уравнение "<< a << "*x*x + " << b << "*x + " << c << " = 0 имеет два корня:\n";
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x1 = " << x2 << std::endl;
		break;
	case(0):
		std::cout << "Квадратное уравнение " << a << "*x*x + " << b << "*x + " << c << " = 0 имеет один корень:\n";
		std::cout << "x1 = x2 =  " << x1 << std::endl;
		break;
	case(-1):
		std::cout << "Квадратное уравнение " << a << "*x*x + " << b << "*x + " << c << " = 0 не имеет корней.\n";
		break;
	default:
		std::cout << "Некорректная работа функкции Myroot";
		break;
	}

	//Практика 4, задание 2
	int a1, b1;
	if (Input(a1, b1) == false) // if(!Input(a,b))
	{
		std::cerr << "error";
		return 1;
	}
	int s = a1 + b1;
	return 0;
}