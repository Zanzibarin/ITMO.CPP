#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void targetShooting() // ������� 2
{
	system("chcp 1251");
	double x, y, x0, y0, xError, yError;
	int points = 0, numOfShots = 0;
	cout << "\n�������� ������ �� 50 �����. \n";
	while (points < 50) {
		cout << "\n������� ���������� (x, y) ����� ������:\n";
		cin >> x >> y;
		x0 = ((double) (rand() % 21 -10)) / 10;//����� ������ ���������� �� ��� x � ��������� �� -1 �� 1
		y0 = ((double) (rand() % 21 - 10)) / 10;//����� ������ ���������� �� ��� y � ��������� �� -1 �� 1
		xError = ((double) (rand() % 7 - 3)) / 10;// ����������� �� ��� x � ��������� �� -0,3 �� 0,3
		yError = ((double) (rand() % 7 - 3)) / 10;// ����������� �� ��� x � ��������� �� -0,3 �� 0,3
		numOfShots++;
		if ((x + xError - x0)*(x + xError - x0) + (y + yError - y0) * (y + yError - y0) <= 1) {
			points += 10;
			cout << "�� ������� �������� 10 �����." << endl;
		}
		else if ((x + xError - x0) * (x + xError - x0) + (y + yError - y0) * (y + yError - y0) <= 4) {
			points += 5;
			cout << "�� ������� �������� 5 �����." << endl;
		}
		else if ((x + xError - x0) * (x + xError - x0) + (y + yError - y0) * (y + yError - y0) <= 9) {
			points += 2;
			cout << "�� ������� �������� 1 ����." << endl;
		}
		else 
			cout << "�� ������� �������� 0 �����." << endl;
	}
	cout << endl;
	cout << "�������� ���������� �����: " << points << endl;
	cout << "��������� ���������: " << numOfShots << endl;

	if (numOfShots < 8)
		cout << "������: �������." << endl;
	else if (numOfShots < 15)
		cout << "������: ������ �������." << endl;
	else
		cout << "������: �������." << endl;
	
}