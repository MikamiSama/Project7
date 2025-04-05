#include "function.h"
#include <iostream>

using namespace std;

#define INTEGER

int main() {
    const int SIZE = 10;
    unsigned seed = 1; // Initial seed
	int arr[SIZE];

    // Update seed
    for (int i = 0; i < time(nullptr) % 100; i++) {
        seed = (1103515245 * seed + 12345) % 2147483648;
    }

    FillArray(arr, SIZE, seed);
    cout << "Original array: ";
    ShowArray(arr, SIZE);

    cout << "Min value: " << FindMin(arr, SIZE) << endl;
    cout << "Max value: " << FindMax(arr, SIZE) << endl;

    SortArray(arr, SIZE);
    cout << "Sorted array: ";
    ShowArray(arr, SIZE);

    EditElement(arr, 2, 99);
    cout << "After editing: ";
    ShowArray(arr, SIZE);

    return 0;
}