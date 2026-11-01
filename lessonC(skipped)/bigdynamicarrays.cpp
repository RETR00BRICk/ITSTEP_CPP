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

int main()
{
    srand(time(NULL));

    int size_x;
    std::cin >> size_x;

    int** jaggedArr = new int* [size_x];
    int* sizes = new int[size_x];

    for (int i = 0; i < size_x;++i) {
        int size_y;
        std::cin >> size_y;
        sizes[i] = size_y;
        jaggedArr[i] = new int[size_y];
        fillArrRandom(jaggedArr[i], size_y, 10, 50);
    }

    for (int i = 0; i < size_x;++i) {
        printArr(jaggedArr[i], sizes[i]);
        std::cout << '\n';
    }

    for (int i = 0; i < size_x; ++i) {
        delete[] jaggedArr[i];
    }

    delete[] jaggedArr;

    //int size_x, size_y, size_z;
    //std::cin >> size_x >> size_y >> size_z;

    //int*** arr3d = new int** [size_x];

    //for (int i = 0; i < size_x; ++i) {
    //    arr3d[i] = new int* [size_y];
    //    for (int j = 0; j < size_y; ++j) {
    //        arr3d[i][j] = new int[size_z];
    //        fillArrRandom(arr3d[i][j], size_z, 10, 50);
    //        printArr(arr3d[i][j], size_z);
    //        std::cout << '\n';
    //    }
    //    std::cout << '\n';
    //}

    //for (int i = 0; i < size_x; ++i) {
    //    for (int j = 0;j < size_y;++j) {
    //        delete[] arr3d[i][j];
    //    }
    //    delete[] arr3d[i];
    //}

    //delete[] arr3d;

    //int** arr2d = new int* [size_x];

    //for (int i = 0; i < size_x;++i) {
    //    arr2d[i] = new int[size_y];
    //    fillArrRandom(arr2d[i], size_y, 10, 50);
    //    printArr(arr2d[i], size_y);
    //    std::cout << '\n';
    //}

    //for (int i = 0; i < size_x; ++i) {
    //    delete[] arr2d[i];
    //}

    //delete[] arr2d;
}
