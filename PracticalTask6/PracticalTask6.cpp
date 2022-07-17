#include <iostream>
#include <fstream>

//Практика 6, задание 2
void sortArrayToFile(int* mas, int n) {
    int min = 0;
    int buf = 0;

    std::ofstream outArray("sortArray");//Запись в файл исходного массива
    if (!outArray) {
        std::cout << "Файл открыть невозможно\n";
        return;
    }
    outArray << "Исходный массив:\n";
    for (int i = 0; i < n; i++) {
        outArray << mas[i] << " ";
    }
    outArray.close();

    for (int i = 0; i < n; i++)//Сортировка массива
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = (mas[j] < mas[min]) ? j : min;
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }

    std::ofstream outSortArray("sortArray",std::ios::app);//Запись в файл отсортированного массива
    if (!outSortArray) {
        std::cout << "Файл открыть невозможно\n";
        return;
    }
    outSortArray << "\nОтсортированный массив:\n";
    for (int i = 0; i < n; i++) {
        outSortArray << mas[i] << " ";
    }
    outSortArray.close();
    std::cout << "Данные записаны в файл sortArray.txt." << std::endl;
}

int main()
{
    system ("chcp 1251");
    //Практика 6, задание 1
    const int MAX = 1000;
    char str[MAX];
    std::cout << "Введите любое стихотворение. Для окончания ввода напишите &.\n" << std::endl;
    std::cin.get(str, MAX, '&');
    std::ofstream poem("poem");
    if (!poem) {
        std::cout << "Файл открыть невозможно\n";
        return 1;
    }
    poem << str;
    std::cout << "Данные записаны в файл poem.txt." << std::endl;

    //Практика 6, задание 2
    //Сортировка массива (сортировка выбором)
    const int N = 10;
    int d[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    std::cout << "Сортировка массива по возрастанию." << std::endl;
    sortArrayToFile(d, N);
}
