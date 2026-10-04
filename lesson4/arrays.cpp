#include <iostream>

//void PrintArray(int* arr) {
//    for (int number : arr) {
//        std::cout << number << ' ';
//    }
//}

int main()
{
    auto number = 10;

    int numbers[5] = { 1, 2, 3, 4, 5 };
    numbers[2] = 10;

    std::cout << numbers[3] << '\n';

    std::cout << numbers << '\n';

    for (int i = 0; i < 5; ++i) {
        //std::cout << number << '\n';
        numbers[i] *= 10;
    }

    for (auto number : numbers) {
        std::cout << number << ' ';
    }

    //const int SIZE = 10;
    //int arr[SIZE];

    //std::cout << numbers[10] << '\n';

}
 
