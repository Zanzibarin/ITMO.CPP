#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int maxNum()
{
	system("chcp 1251");
	int num1, num2, num3;
	cout << "\n������� ��� ����� ����� ����� ������:\n";
	cin >> num1 >> num2 >> num3;
	if (num1 >= num2 && num1 >= num3)
		cout << "������������ �����: " << num1 << endl;
	else if (num2 >= num3)
		cout << "������������ �����: " << num2 << endl;
	else
		cout << "������������ �����: " << num3 << endl;
	return 0;
}