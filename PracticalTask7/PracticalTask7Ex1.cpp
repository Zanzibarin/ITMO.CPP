#include <iostream> 
#include <windows.h>

//�������� 7, ����������� ������� 1
struct Time {
    int hours, minutes, seconds;
    void InputTime()
        {
            std::cout << "\n������� ���������� �����: ";
            std::cin >> hours;
            std::cout << "������� ���������� �����: ";
            std::cin >> minutes;
            std::cout << "������� ���������� ������: ";
            std::cin >> seconds;
        }

    void ShowTime() {
        std::cout << "����: " << hours << " ������: " << minutes << " �������: " << seconds << std::endl;

    }
    int TimeToSeconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }
    void PlusTime(Time time) {
         int addInSeconds = TimeToSeconds() + time.TimeToSeconds();
         hours = addInSeconds / 3600;
         minutes = (addInSeconds % 3600)/ 60;
         seconds = addInSeconds % 60;
    }
    void MinusTime(Time time) {
        int minusInSeconds = abs(TimeToSeconds() - time.TimeToSeconds());
        hours = minusInSeconds / 3600;
        minutes = (minusInSeconds % 3600) / 60;
        seconds = minusInSeconds % 60;
    }
};

void TestTime() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Time time1;
    Time time2 = { 1, 30, 5 };
    time1.InputTime();
    time1.ShowTime();
    time2.ShowTime();
    std::cout << time1.TimeToSeconds() << std::endl;
    time1.PlusTime(time2);
    time1.ShowTime();
    time1.MinusTime(time2);
    time1.MinusTime(time2);
    time1.ShowTime();    
}