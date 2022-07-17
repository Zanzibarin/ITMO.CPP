#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

void AdditionalInfo(Person* person) {
    int age;
    string phone, address, street, houseNumber, apartmentNumber;
    char   choice;
    cout << "Ввести дополнительную информацию((у / n) ? ";
    cin >> choice;
    if (choice == 'y') {
        cout << "Введите возраст: ";
        cin >> age;
        cout << "Введите телефон: ";
        cin >> phone;
        cout << "Введите название улицы: ";
        cin >> street;
        cout << "Введите номер дома: ";
        cin >> houseNumber;
        cout << "Введите номер квартиры: ";
        cin >> apartmentNumber;
        address = street + ", дом " + houseNumber + ", квартира " + apartmentNumber;
        person->SetAge(age);
        person->SetPhone(phone);
        person->SetAddress(address);
    }
    else {
        cout << "Ввод дополнительных данных не производится.\n";
    }
}

void ShowInfo(const Person* person) {
    cout << person->GetInfo() << endl;
}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Discipline* discipline[10];
    discipline[0] = new Discipline("Физика", 65, "экзамен");
    discipline[1] = new Discipline("Химия", 40, "зачёт");
    discipline[2] = new Discipline("Литература", 40, "зачёт");
    discipline[3] = new Discipline("Философия", 65, "экзамен");
    discipline[4] = new Discipline("История", 40, "зачёт");
    Person* person[100];
    int n = 0;
    char choice;
    do
    {
        cout << "\nВводить данные о студенте или преподавателе (s / t) ? ";
        cin >> choice;
        if (choice == 's') {
            string lastName, name, secondName;
            cout << "Введите фамилию студента: ";
            cin >> lastName;
            cout << "Введите имя студента: ";
            cin >> name;
            cout << "Есть ли отчество((у / n) ?  ";
            cin >> choice;
            if (choice == 'y') {
                cout << "Введите отчество студента: ";
                cin >> secondName;
            }
            else {
                secondName = "not";
            }
            std::vector<int> scores;
            // Добавление оценок студента в вектор
            unsigned int mark, numMarks;
            cout << "Пожалуйста, введите количество отметок: ";
            cin >> numMarks;
            cout << "Введите отметки: ";
            for (int i = 0; i < numMarks; i++) {
                cin >> mark;
                scores.push_back(mark);
            }
            /*int num; //работает некорректно
            cout << "Пожалуйста, введите отметки (для выхода нажмите q):\n";
            while (cin >> num) {
                scores.push_back(num);
            }*/
            person[n] = new Student(lastName, name, secondName, scores);

            AdditionalInfo(person[n]);
            person[n]->Save();
        }
        else {
            string lastName, name, secondName;
            cout << "Введите фамилию преподавателя: ";
            cin >> lastName;
            cout << "Введите имя преподавателя: ";
            cin >> name;
            cout << "Есть ли отчество((у / n) ? ";
            cin >> choice;
            if (choice == 'y') {
                cout << "Введите отчество преподавателя: ";
                cin >> secondName;
            }
            else {
                secondName = "not";
            }

            unsigned int numDis;
            cout << "Введите номер дисциплины (1 - Физика, 2 - Химия, 3 - Литература, 4 - Философия, 5 - История): ";
            cin >> numDis;
            person[n] = new Teacher(lastName, name, secondName, discipline[numDis-1]);

            AdditionalInfo(person[n]);
            person[n]->Save();
        }
        cout << "Продолжать((у / n) ? ";
        cin >> choice;
        n++;
    } while (choice == 'y');
    for (int j = 0; j < n; j++) //Вывод, цикл по всем объектам
        ShowInfo(person[j]);
    for (int j = 0; j < n; j++) //Освобождение памяти, цикл по всем объектам
        delete person[j];
    return 0;
}