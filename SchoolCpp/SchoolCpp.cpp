// Практика 12; практика 13, контрольное задание
#include <iostream>
#include <vector>
#include <windows.h>
#include "human.h"
#include "student.h"
#include "teacher.h"

//void ShowInfo(const human* hum) {
//	std::cout << hum->get_info() << "\n----------------- " << std::endl;
//}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// Оценкистудента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	human* hum1 = new human("Иванов", "Иван", "Алексеевич");
	std::cout << hum1->get_info() << "\n----------------- " << std::endl;
	student* stud = new student("Петров", "Иван", "Алексеевич", scores);
	hum1 = stud;
	std::cout << hum1->get_info() << "\n----------------- " << std::endl;
	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	hum1 = tch;
	std::cout << hum1->get_info() << "\n----------------- " << std::endl;
	delete hum1;
	delete stud;
	delete tch;
	return 0;
}
