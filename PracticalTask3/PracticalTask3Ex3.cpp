#include <iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

double triangleArea(double side1, double side2, double side3)
{
    double p = (side1 + side2 + side3) / 2;
    double area = sqrt(p * (p - side1) * (p - side2) * (p - side3));
    return area;
}

double triangleArea(double side)
{
    double area = (side * side * sqrt(3)) / 4;;
    return area;
}
void triangleTypeSelection() {
    system("chcp 1251");
    string selection;
    cout << "�������� �� ����������� �������������� (��/���)?\n";
    cin >> selection;

    if (selection == "��")
    {
        double side;
        cout << "������� ����� ������� ������������\n";
        cin >> side;
        cout << "������� ������������ ����� " << triangleArea(side) << endl;
    }
    else if (selection == "���")
    {
        double side1, side2, side3;
        cout << "������� ����� ��� ������ ������������ ����� ������\n";
        cin >> side1 >> side2 >> side3;
        cout << "������� ������������ ����� " << triangleArea(side1, side2, side3) << endl;
    }
    else
        cout << "������������ ����.\n";

}
