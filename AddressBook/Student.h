#pragma once
#include "Person.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;
class Student : public Person {
public:
	Student(string lastName, string name, string secondName, vector<int> scores) :
		Person(lastName, name, secondName) {
		this->scores = scores;
	}

	string GetStatus() const{
		return "студент";
	}
	virtual string GetInfo() const
	{
		std::ostringstream fullInfo;
		fullInfo << Person::GetInfo() << "\nСредний балл : " << get_average_score() << "\n-------------";
		return fullInfo.str();
	}
	void Save() const
	{
		Person::Save();
		ofstream fout("person.txt", ios::app);
		fout << "Средний балл : " << get_average_score() <<  "\n------------";
		fout << endl;
		fout.close();
	}
	// Получение среднего балла студента
	float get_average_score() const
	{
		// Общее количество оценок
		unsigned int count_scores = this->scores.size();
		// Сумма всех оценок студента
		unsigned int sum_scores = 0;
		// Средний балл
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}
private:
	// Оценки студента
	std::vector<int> scores;
};
