#include <cmath>

//Практика 4, задание 1
int Myroot(double a, double b, double c, double &x1, double &x2) {
	double D = b * b - 4 * a * c;
	if (D > 0) {
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		return 1;
	}
	if (D == 0) {
		x1 = (-b) / (2 * a);
		x2 = x1;
		return 0;
	}
	return -1;

}