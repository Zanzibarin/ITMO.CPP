#include <cmath>

double cubeRoot(double num) {
	return pow(num, 1.0 / 3);
}

double cubeRootIteration(double num) {
	double x1 = 0;
	double x2 = num;
	while (abs(x1 - x2) > 0.000001) {
		x1 = x2;
		x2 = (num / (x1 * x1) + 2 * x1) / 3;
	}
	return x2;
}