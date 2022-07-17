//Практика 10, контрольное задание 1
#include <iostream>
#include <math.h>
#include <string>
#include <windows.h>
#include "Dot.h"

using namespace std;

class Triangle {//агрегация
public:
     Triangle(Dot* a, Dot* b, Dot* c) : a{ a }, b{ b }, c{ c }
    {
    }
     double get_ab() {
        return a->distanceTo(*b);
    }
    double get_bc() {
        return  b->distanceTo(*c);
    }
    double get_ac() {
        return a->distanceTo(*c);
    }
    boolean IsNotTriangle(double ab, double bc, double ac) {
        if (ac >= ab + bc or ab >= bc + ac or bc >= ab + ac) return true;
        return false;
    }

    double TrianglePerimeter() {
        double ab;
        double bc;
        double ac;
        ab = a->distanceTo(*b);
        bc = b->distanceTo(*c);
        ac = a->distanceTo(*c);
        if (IsNotTriangle(ab, bc, ac))
            throw Triangle::ExNotTriangle("объекта Triangle.");
        return ab + bc + ac;
    }

    double TriangleArea() {
        double ab;
        double bc;
        double ac;
        ab = a->distanceTo(*b);
        bc = b->distanceTo(*c);
        ac = a->distanceTo(*c);
        double p = TrianglePerimeter()/ 2;
        return sqrt(p * (p - ab) * (p - bc) * (p - ac));
    }
    class ExNotTriangle {
    public:
        string nameObject;
        ExNotTriangle(string nameObj) :nameObject(nameObj) {}
    };
private:
    Dot* a;
    Dot* b;
    Dot* c;
};

//class Triangle {//композиция
//public:
//    Triangle(Dot a, Dot b, Dot c) : a{ a }, b{ b }, c{c}
//    { }
//
//    double get_ab() {
//        return a.distanceTo(b);
//    }
//    double get_bc() {
//        return b.distanceTo(c);
//    }
//    double get_ac() {
//        return a.distanceTo(c);
//    }
//    boolean IsNotTriangle(double ab, double bc, double ac) {
//        if (ac >= ab + bc or ab >= bc + ac or bc >= ab + ac) return true;
//        return false;
//    }
//
//    double TrianglePerimeter() {
//        double ab;
//        double bc;
//        double ac;
//        ab = a.distanceTo(b);
//        bc = b.distanceTo(c);
//        ac = a.distanceTo(c);
//        if (IsNotTriangle(ab, bc, ac))
//            throw Triangle::ExNotTriangle("объекта Triangle.");
//        return ab + bc + ac;
//    }
//
//    double TriangleArea() {
//        double ab;
//        double bc;
//        double ac;
//        ab = a.distanceTo(b);
//        bc = b.distanceTo(c);
//        ac = a.distanceTo(c);
//        if (IsNotTriangle(ab, bc, ac))
//            throw Triangle::ExNotTriangle("объекта Triangle.");
//        double p = TrianglePerimeter() / 2;
//        return sqrt(p * (p - ab) * (p - bc) * (p - ac));
//    }
//    class ExNotTriangle {
//    public:
//        string nameObject;
//        ExNotTriangle(string nameObj) :nameObject(nameObj) {}
//    };
//private:
//    Dot a;
//    Dot b;
//    Dot c;
// };

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Введите через пробел координаты вершин треугольника\n";
    double ax, ay, bx, by, cx, cy;
    cin >> ax>> ay >> bx >> by >> cx >> cy;
    Dot a(ax, ay);
    Dot b(bx, by);
    Dot c(cx, cy);
    try {
    
        Triangle triangle(&a, &b, &c);//агрегация
        cout << "АВ = " << triangle.get_ab() << " ВC = " << triangle.get_bc() << " AC = " << triangle.get_ac() << endl;
        cout << "Периметр треугольника " << triangle.TrianglePerimeter() << endl;
        cout << "Площадь треугольника " << triangle.TriangleArea() << endl;

        /*Triangle triangle(a, b, c);//композиция
         cout <<"АВ = "<< triangle.get_ab() << " ВC = " << triangle.get_bc() << " AC = "<< triangle.get_ac() << endl;
         cout << "Периметр треугольника " << triangle.TrianglePerimeter() << endl;
         cout << "Площадь треугольника " << triangle.TriangleArea() << endl;*/
    }
    catch (Triangle::ExNotTriangle& ex)
    {
        cout << "\nОшибка инициализации " << ex.nameObject;
    }
} 
