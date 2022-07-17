#include <iostream>

//Практика 4, задание 2
bool Input(int& a, int& b) {
	int ina, inb;
	std::cout << "Введите два целых положительных числа:"<<std::endl;
	if (!(std::cin >> ina) or !(std::cin >> inb) or (ina<=0) or (inb<=0))
		return false;
	a = ina;
	b = inb;
	return true;
}