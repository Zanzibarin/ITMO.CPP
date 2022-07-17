#include <iostream> 
#include <cmath>

//Практика 7, контрольное задание 2
struct Roots {
	double x1 = 0, x2 = 0;
};

Roots Myroot(double a, double b, double c) {
	Roots myroots;
	double D = b * b - 4 * a * c;
	if (D > 0) {
		myroots.x1 = ((-b) + sqrt(D)) / (2 * a);
		myroots.x2 = ((-b) - sqrt(D)) / (2 * a);
	}
	if (D == 0) {
		myroots.x1 = (-b) / (2 * a);
		myroots.x2 = myroots.x1;
	}
	return myroots;
}

void TestMyrootStruct() {
	Roots r1 = Myroot(3, 7, 1);
	std::cout <<"x1 = " <<  r1.x1 << " x2 = " << r1.x2 << std::endl;
	Roots r2 = Myroot(5, 1, 7);
	std::cout << "x1 = " << r2.x1 << " x2 = " << r2.x2 << std::endl;
}