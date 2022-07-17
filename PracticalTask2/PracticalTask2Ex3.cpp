#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int exchangeOfRussianCoins()
{
	system("chcp 1251");
	int countCoins, remainder;
	int coins[4] = { 10, 5, 2, 1 };
	cout << "\nВведите сумму в рублях (копейки указывать не нужно):\n";
	cin >> remainder;
	for (int coin : coins){
		countCoins = remainder / coin;
		remainder %= coin;
		cout<< "Монет достоинством "<< coin << " рублей(ля, ль) " << countCoins <<" штук(а, ки)." << endl;
	}
	return 0;
	// Решение без цикла
	//countCoin10 = remainder / 10;
	//remainder = remainder - countCoin10 * 10;
	//countCoin5 = remainder / 5;
	//remainder = remainder - countCoin5 * 5;
	//countCoin2 = remainder / 2; 
	//countCoin1 = remainder - countCoin2 * 2;
	//cout << countCoin10 << countCoin5 << countCoin2 << countCoin1 << endl;
		
}