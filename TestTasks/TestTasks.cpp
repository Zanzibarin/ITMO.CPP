#include <iostream>
#include "A.h"
#include "Point.h"
#include "Stack .h"
using namespace std;

int main()
{	//Тестовое задание 1; класс “A”, инкапсулирующий динамический массив
	A a1;
	A a2(10); //10 – размер массива 
	A a3 = a2;
	a1 = a3;
	a2 = A(20);
	const A a4(5);
	for (int i = 0; i < a2.size(); i++)
	{
		cout << a4[i] << endl;
	}

	//Тестовое задание 3
	Point pt1(1, 1), pt2(2, 2), pt3;
	pt3 = pt1 + pt2;
	pt2 += pt1;
	pt3 = pt1 + 5;
	cout << pt1 << pt2 << pt3;

	//Тестовое задание 4; класс, реализующий функционал стека
	Stack stack;
	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();
	return 0;
}
