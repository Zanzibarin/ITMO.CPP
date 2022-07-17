#include <iostream>
#include <string>
#include <map>
#include <windows.h>
using namespace std;

struct StudentGrade
{
    string name;
    char grade;
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    map<string, char>  gradeMap;
    StudentGrade student1{ "Иван", '4' };
    StudentGrade student2{ "Пётр", '5' };
    gradeMap.insert(pair<string, char>(student1.name, student1.grade));
    gradeMap.insert(pair<string, char>(student2.name, student2.grade));
    // Вывод всего массива
    map<string, char>::iterator p;
    p = gradeMap.begin();
    while (p != gradeMap.end()) {

        cout << "Студент " << (*p).first << " имеет отметку " << (*p).second << endl;
        p++;
    }
    string name;
    cout << "Введите имя студента" << endl;
    cin >> name;
    for (auto& stud : gradeMap)
    {
        // Если нашли, то выводим информацию
        if (stud.first == name) {
            cout << "Студент " << stud.first << " имеет отметку " << stud.second << endl;
            return 0;
        }
    }
    // Не нашли - создаём новый StudentGrade для нового ученика
    char grade;
    cout << "Студент " << name << " не найден." << endl;
    cout << "Введите отметку студента: " << endl;
    cin >> grade;
    StudentGrade student{ name, grade };
    gradeMap.insert(pair<string, char>(student.name, student.grade));
    cout << "Внесена новая запись." << endl;
    cout  <<"Студент " << student.name << " имеет отметку " << student.grade << endl;
    return 0;
}

