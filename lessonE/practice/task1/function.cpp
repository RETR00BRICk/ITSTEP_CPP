#include <iostream>
#include <cstdlib>
#include "function.h"
using namespace std;


void fillArrayInt(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void printArrayInt(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int findMinInt(const int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int findMaxInt(const int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void sortArrayInt(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void editElementInt(int* arr, int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}

void fillArrayDouble(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 1000) / 10.0;
    }
}

void printArrayDouble(const double* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

double findMinDouble(const double* arr, int size) {
    double min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double findMaxDouble(const double* arr, int size) {
    double max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void sortArrayDouble(double* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void editElementDouble(double* arr, int size, int index, double newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}

void fillArrayChar(char* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 'a' + (rand() % 26);
    }
}

void printArrayChar(const char* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

char findMinChar(const char* arr, int size) {
    char min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

char findMaxChar(const char* arr, int size) {
    char max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void sortArrayChar(char* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void editElementChar(char* arr, int size, int index, char newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}
