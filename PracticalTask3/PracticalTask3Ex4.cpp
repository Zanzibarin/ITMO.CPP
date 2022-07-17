#include <iostream>

int sumMult5(int n) {
	if (n == 1) return 5;
	else return(n*5 + sumMult5(n-1));
}