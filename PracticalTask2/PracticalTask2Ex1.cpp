#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void highYear()
{
	system("chcp 1251");
	int year;
	cout << "\nВведите год:\n";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
	//Второй способ
	//system("chcp 1251");
	//int year;
	//cout << "\nВведите год:\n";
	//cin >> year;
	//if (year % 400 == 0)
	//	cout << "YES" << endl;
	//else if (year % 4 == 0 && year % 100 != 0)
	//	cout << "YES" << endl;
	//else
	//	cout << "NO" << endl;
}
