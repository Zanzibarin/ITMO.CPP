#include <iostream>

using namespace std;

template<class T>
void sorting(T arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        int x = arr[i];
        for (j = i - 1; j >= 0 && x < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = x;
    }
}

template<class T>//Практика 14, контрольное задание
double Mean(T arr[], int size) {
    int summ = 0;
    for (int i = 0; i < size; i++) 
        summ += arr[i];
    return summ / (double)size;
}

template<class T>
void ShowArray(T arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++)
        cout << arr[i] << "; ";
    cout << endl;        
}

int main()
{
    int arr[] = { 9,3,17,6,5,4,31,2,12 };
    double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
    char arrc[] = "Hello, word";
    long arrl[] = { 0,3,7,10,67,4,31,2,45,79 };
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
    int k4 = sizeof(arrl) / sizeof(arrl[0]);
    sorting(arr, k1);
    ShowArray(arr, k1);
    cout << Mean(arr, k1) << endl;
    sorting(arrd, k2);
    ShowArray(arrd, k2);
    cout << Mean(arrd, k2) << endl;
    sorting(arrc, k3);
    ShowArray(arrc, k3);
    cout << Mean(arrc, k3) << endl;
    sorting(arrl, k4);
    ShowArray(arrl, k4);
    cout << Mean(arrl, k4) << endl;
}