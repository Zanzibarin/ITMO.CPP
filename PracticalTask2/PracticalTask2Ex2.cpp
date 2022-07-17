#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int maxNum()
{
	system("chcp 1251");
	int num1, num2, num3;
	cout << "\nВведите три целых числа через пробел:\n";
	cin >> num1 >> num2 >> num3;
	if (num1 >= num2 && num1 >= num3)
		cout << "Максимальное число: " << num1 << endl;
	else if (num2 >= num3)
		cout << "Максимальное число: " << num2 << endl;
	else
		cout << "Максимальное число: " << num3 << endl;
	return 0;
}