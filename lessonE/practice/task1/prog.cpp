#include <iostream>
#include <ctime>
#define INTEGER
#include "function.h"

int main(){
	srand(time(0));
	const int SIZE = 7;
    int arr[SIZE];
    fill(arr, SIZE);
    std::cout << "Array: ";
    print(arr, SIZE);
    std::cout << "Min: " << min(arr, SIZE) << "\n";
    std::cout << "Max: " << max(arr, SIZE) << "\n";

    int editIndex = 2;
    int newValue = 999;
    edit(arr, SIZE, editIndex, newValue);

    std::cout << "Changed element of index " << editIndex << " to " << newValue << "\nArray: ";
    print(arr, SIZE);

    sort(arr, SIZE);
    std::cout << "After sorting: ";
    print(arr, SIZE);
}
