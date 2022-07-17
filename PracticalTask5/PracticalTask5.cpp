#include <iostream>
#include "HeaderPracticalTask5.h"

int main()
{
    system("chcp 1251");

    //Практика5, задание 1
    // Операции с элементами массива
    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "mas[" << i << "]=";
        std::cin >> mas[i];
    }   

    std::cout << "Сумма элементов массива: " << sumElems(mas, n) << std::endl;
    std::cout << "Среднее значение элементов массива: " << meanValue(mas, n) << std::endl;
    std::cout << "Сумма отрицательных элементов массива: " << sumNegElems(mas, n) << std::endl;
    std::cout << "Сумма положиетльных элементов массива: " << sumPosElems(mas, n) << std::endl;
    std::cout << "Сумма элементов массива с нечетными индексами: " << sumElemsOddIndex(mas, n) << std::endl;
    std::cout << "Сумма элементов массива с четными индексами: " << sumElemsEvenIndex(mas, n) << std::endl;
    std::cout << "Индекс минимального элемента: " << indexMinElems(mas, n) << std::endl;
    std::cout << "Индекс максимального элемента: " << indexMaxElems(mas, n) << std::endl;
    multElems(mas, n);

    //Сортировка массива (сортировка выбором)
    const int N = 10;
    int d[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    std::cout << "Сортировка массива по возрастанию:" << std::endl;
    sortArray(d, N);

    //Практика 5, задание 2
    std::cout << "\nВыбор наибольшего элемента из пары:" << std::endl;
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива
    int* c; //Указатель на результирующий массив
    c = max_vect(kc, a, b);
    for (int i = 0; i < kc; i++) 
        std::cout << c[i] << " ";
    std::cout << std::endl;
    delete[]c;
}

