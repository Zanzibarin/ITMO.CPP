#pragma once
#include "human.h"
#include <string>
class teacher : public human {
	// Конструктор класса teacher
public:
	teacher(
		std::string last_name, std::string name, std::string second_name,
		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time) : human(last_name, name, second_name) {
		this->work_time = work_time;
	}

	std::string get_info() const
	{
		std::ostringstream full_name;
		full_name << human::get_info() << "\nКоличество часов: " << get_work_time();
		return full_name.str();
	}
	// Получение количества учебных часов
	unsigned int get_work_time() const
	{
		return this->work_time;
	}
private:
	// Учебные часы
	unsigned int work_time;
};