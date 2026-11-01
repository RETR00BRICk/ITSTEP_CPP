#pragma once

#ifdef INTEGER
    #define fill fillArrayInt
    #define print printArrayInt
    #define min findMinInt
    #define max findMaxInt
    #define sort sortArrayInt
    #define edit editElementInt
#endif
#ifdef DOUBLE
    #define fill fillArrayDouble
    #define print printArrayDouble
    #define min findMinDouble
    #define max findMaxDouble
    #define sort sortArrayDouble
    #define edit editElementDouble
#endif
#ifdef CHAR
    #define fill fillArrayChar
    #define print printArrayChar
    #define min findMinChar
    #define max findMaxChar
    #define sort sortArrayChar
    #define edit editElementChar
#endif

void fillArrayInt(int* arr, int size);
void printArrayInt(const int* arr, int size);
int findMinInt(const int* arr, int size);
int findMaxInt(const int* arr, int size);
void sortArrayInt(int* arr, int size);
void editElementInt(int* arr, int size, int index, int newValue);

void fillArrayDouble(double* arr, int size);
void printArrayDouble(const double* arr, int size);
double findMinDouble(const double* arr, int size);
double findMaxDouble(const double* arr, int size);
void sortArrayDouble(double* arr, int size);
void editElementDouble(double* arr, int size, int index, double newValue);

void fillArrayChar(char* arr, int size);
void printArrayChar(const char* arr, int size);
char findMinChar(const char* arr, int size);
char findMaxChar(const char* arr, int size);
void sortArrayChar(char* arr, int size);
void editElementChar(char* arr, int size, int index, char newValue);


