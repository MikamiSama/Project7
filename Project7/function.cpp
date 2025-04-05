#include "function.h"
#include <iostream>
#include <ctime> 

using namespace std;

unsigned simpleRandom(unsigned& seed) {
    seed = (1103515245 * seed + 12345) % 2147483648;
    return seed;
}

template <typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

void SortArrayInt(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                Swap(arr[j], arr[j + 1]);
}

void SortArrayDouble(double arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                Swap(arr[j], arr[j + 1]);
}

void SortArrayChar(char arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                Swap(arr[j], arr[j + 1]);
}

void FillArrayInt(int arr[], int size, unsigned& seed) {
    for (int i = 0; i < size; i++)
        arr[i] = simpleRandom(seed) % 100;
}

void ShowArrayInt(const int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int FindMinInt(const int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

int FindMaxInt(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void EditElementInt(int arr[], int index, int value) {
    if (index >= 0 && index < sizeof(arr) / sizeof(arr[0]))
        arr[index] = value;
}

void FillArrayDouble(double arr[], int size, unsigned& seed) {
    for (int i = 0; i < size; i++)
        arr[i] = (simpleRandom(seed) % 10000) / 100.0;
}

void ShowArrayDouble(const double arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

double FindMinDouble(const double arr[], int size) {
    double min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

double FindMaxDouble(const double arr[], int size) {
    double max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void EditElementDouble(double arr[], int index, double value) {
    if (index >= 0 && index < sizeof(arr) / sizeof(arr[0]))
        arr[index] = value;
}

void FillArrayChar(char arr[], int size, unsigned& seed) {
    for (int i = 0; i < size; i++)
        arr[i] = 'A' + simpleRandom(seed) % 26;
}

void ShowArrayChar(const char arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

char FindMinChar(const char arr[], int size) {
    char min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

char FindMaxChar(const char arr[], int size) {
    char max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void EditElementChar(char arr[], int index, char value) {
    if (index >= 0 && index < sizeof(arr) / sizeof(arr[0]))
        arr[index] = value;
}