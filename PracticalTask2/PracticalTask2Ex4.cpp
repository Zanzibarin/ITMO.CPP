#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void targetShooting() // Вариант 2
{
	system("chcp 1251");
	double x, y, x0, y0, xError, yError;
	int points = 0, numOfShots = 0;
	cout << "\nСтрельба ведётся до 50 очков. \n";
	while (points < 50) {
		cout << "\nВведите координаты (x, y) через пробел:\n";
		cin >> x >> y;
		x0 = ((double) (rand() % 21 -10)) / 10;//Сдвиг центра окружности по оси x в диапазоне от -1 до 1
		y0 = ((double) (rand() % 21 - 10)) / 10;//Сдвиг центра окружности по оси y в диапазоне от -1 до 1
		xError = ((double) (rand() % 7 - 3)) / 10;// Погрешность по оси x в диапазоне от -0,3 до 0,3
		yError = ((double) (rand() % 7 - 3)) / 10;// Погрешность по оси x в диапазоне от -0,3 до 0,3
		numOfShots++;
		if ((x + xError - x0)*(x + xError - x0) + (y + yError - y0) * (y + yError - y0) <= 1) {
			points += 10;
			cout << "За выстрел получено 10 очков." << endl;
		}
		else if ((x + xError - x0) * (x + xError - x0) + (y + yError - y0) * (y + yError - y0) <= 4) {
			points += 5;
			cout << "За выстрел получено 5 очков." << endl;
		}
		else if ((x + xError - x0) * (x + xError - x0) + (y + yError - y0) * (y + yError - y0) <= 9) {
			points += 2;
			cout << "За выстрел получено 1 очко." << endl;
		}
		else 
			cout << "За выстрел получено 0 очков." << endl;
	}
	cout << endl;
	cout << "Итоговое количество очков: " << points << endl;
	cout << "Количесво выстрелов: " << numOfShots << endl;

	if (numOfShots < 8)
		cout << "Статус: Снайпер." << endl;
	else if (numOfShots < 15)
		cout << "Статус: Просто стрелок." << endl;
	else
		cout << "Статус: Новичок." << endl;
	
}