#include <iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	system("chcp 1251");
	double S;
	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
	cout << "\nВведите координаты по-порядку, начиная с любой вершины:\n";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
	S = 0.5 * fabs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5);
	cout << "\nS = " << S << endl; //вывод результата на экран
	return 0;

}