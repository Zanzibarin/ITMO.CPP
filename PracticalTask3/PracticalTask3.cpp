#include <iostream>
#include "HeaderPracticalTask3.h"

int main()
{
	system("chcp 1251");

	//практика 3, задание 1
	std::cout << "практика 3, задание 1" << std::endl;
	std::cout << "Площадь пятиугольника : " << pentagonArea() << std::endl; 

	//Практика 3, задание 2
	std::cout << "практика 3, задание 2" << std::endl;
	std::cout << "Введите положительное число.\n";
	int number;
	std::cin >> number;
	std::cout << "Кубические корни числа: " << std::endl;
	std::cout << cubeRoot(number) << std::endl;
	std::cout << cubeRootIteration(number) << std::endl;

	//практика 3, задание 3
	std::cout << "практика 3, задание 3" << std::endl;
    triangleTypeSelection(); 

	//практика 3, задание 4
	std::cout << "практика 3, задание 4" << std::endl;
	std::cout << "Введите положительное число n.\n";
	int n;
	std::cin >> n;
	std::cout << "сумма ряда s = 5 + 10 + 15 + … + 5·n равна " << sumMult5(n) << std::endl;

	//практика 3, задание 5
	std::cout << "практика 3, задание 5" << std::endl;
	std::cout << "Введите положительное число.\n";
	int num;
	std::cin >> num;
	std::cout << "Двоичная запись числа: " << std::ends;
	convert10to2(num);
}