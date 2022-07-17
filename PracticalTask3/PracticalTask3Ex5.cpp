#include <iostream>
// Певый вариант
//void convert10to2(int num) {
//	if (num >= 2) 
//		convert10to2(num / 2);
//	std::cout << num % 2;
//}

// Второй вариант
void convert10to2(int num) {
	if (num <= 2) {
		std::cout << num;
		return;
	}
	else {
		convert10to2(num / 2);
		std::cout << num % 2;
		return;
	}
}