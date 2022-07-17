#pragma once
#include <string>
#include "Person.h"
#include "Discipline.h"
using namespace std;
class Teacher : public Person {
public:
	Teacher(string lastName, string name, string secondName, Discipline* discipline) : Person(lastName, name, secondName) {
		this->discipline = discipline;
	}
	string GetStatus() const {
		return "преподаватель";
	}
	virtual string GetInfo() const
	{
		std::ostringstream fullInfo;
		fullInfo << Person::GetInfo() << "\nДисциплина: " << discipline->getInfoDistcipline() << "\n-------------";
		return fullInfo.str();
	}
	void Save() const
	{
		Person::Save();
		ofstream fout("person.txt", ios::app);
		fout << "Дисциплина: " << discipline->getInfoDistcipline() << "\n-------------";
		fout << endl;
		fout.close();
	}
private:
	// Дисциплина
	Discipline* discipline;
};
