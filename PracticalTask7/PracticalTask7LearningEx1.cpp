#include <iostream> 
#include <string> 
#include <windows.h>

//Практика 7, упражнение 1-3
struct Distance
{
    int feet;
    double inches;
    void ShowDist()
    {
        std::cout << feet << "\'-" << inches << "\"\n";
    }

};

Distance AddDist(const Distance& d1, const Distance& d2)
{
    Distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;
    if (d.inches >= 12.0)
    {
        d.inches -= 12.0;
        d.feet++;
    }
    return d;
}

Distance InputDist()
{
    Distance d;
    std::cout << "\nВведите число футов: ";
    std::cin >> d.feet;
    std::cout << "Введите число дюймов: ";
    std::cin >> d.inches;
    return d;
}

void ShowDist(Distance d)
{
    std::cout << d.feet << "\'-" << d.inches << "\"\n";
}
int TestDistance() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Distance d1 = InputDist();
    Distance d2 = { 1, 6.25 };
    Distance d3 = AddDist(d1, d2);
    d1.ShowDist();
    d2.ShowDist();
    d3.ShowDist();

    int n;
    std::cout << "Введите размер массива расстояний ";
    std::cin >> n;
    Distance* masDist = new Distance[n];
    for (int i = 0; i < n; i++)
    {
        masDist[i] = InputDist();
    }
    for (int i = 0; i < n; i++)
    {
        ShowDist(masDist[i]);
    }
    delete[] masDist;

    return 0;
}