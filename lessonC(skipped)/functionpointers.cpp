#include <iostream>

void fillArrRandom(int* arr, int size, int min, int max) {
    for (int i = 0;i < size; ++i) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
}

void multBy5(int& number) {
    number *= 5;
}

void divideBy3(int& number) {
    number /= 3;
}

void map(int* arr, int size, void(*callback)(int& n)) {
    for (int i = 0; i < size; ++i) {
        callback(arr[i]);
    }
}

int main()
{
    srand(time(NULL));

    const int SIZE = 5;
    int arr[SIZE] = { 9, 4, 2, 4,3 };

    map(arr, SIZE, multBy5);
    printArr(arr, SIZE);
    std::cout << '\n';

    map(arr, SIZE, divideBy3);
    printArr(arr, SIZE);
    //void (*ptr) (int&) = multBy5;

    //int number = 20;

    //ptr(number);

    //std::cout << number << '\n';

    //std::cout << main << '\n';

}
