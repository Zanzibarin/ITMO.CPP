//“естовое задание 1; класс УAФ, инкапсулирующий динамический массив
#pragma once
#include <iostream>

using namespace std;

class A {
public:
    A() {
        sizeArr = 0;
        arr = {};
    }
    A(int size) {
        sizeArr = size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }
    A(const A& arrForInit) {
        sizeArr = arrForInit.sizeArr;
        arr = new int[sizeArr];
        for (int i = 0; i < sizeArr; i++)
            arr[i] = arrForInit.arr[i];
    }
    int size()const {
        int count = 0;
        for (int i = 0; i < sizeArr; i++) {
            count++;
        }
        return count;
    }
    ~A() {
        if (sizeArr > 0)
            delete[] arr;
    }
    A& operator=(const A& arrForInit) {
        if (sizeArr > 0)
            delete[] arr;
        sizeArr = arrForInit.sizeArr;
        arr = new int[sizeArr];
        for (int i = 0; i < sizeArr; i++)
            arr[i] = arrForInit.arr[i];
        return *this;
    }
    const int& operator[] (const int& index)const {
        return arr[index];
    }
    private:
    int sizeArr;
    int* arr;
};
