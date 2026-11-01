#include <iostream>
 
//!!! TASK 8 COPIED










int Len(char* str) {
    int len = 0;
    while (*str != '\0')
    {
        ++len;
        ++str;
    }
    return len;
}
 
int the_most_len(char** arr, int size) {
    int maxIndex = 0;
    int maxLen = Len(arr[0]);
 
    for (int i = 1; i < size; ++i) {
        int currentLen = Len(arr[i]);
        if (currentLen > maxLen) {
            maxLen = currentLen;
            maxIndex = i;
        }
    }
    return maxIndex;
}
 
int main()
{
    const int N = 5;
    char buffer[256];
 
    char** famil = new char* [N];
 
    std::cout << "введіть призвища 5 студентів:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "Студент " << (i + 1) << ": ";
        std::cin >> buffer;
 
        int len = Len(buffer);
        famil[i] = new char[len + 1];
 
        for (int j = 0; j <= len; ++j) {
            famil[i][j] = buffer[j];
        }
    }
 
    int longestIndex = the_most_len(famil, N);
 
    std::cout << "\nНайдовше прізвище: " << famil[longestIndex] << '\n';
    std::cout << "Довжина: " << Len(famil[longestIndex]) << " символів\n";
 
    for (int i = 0; i < N; ++i) {
        delete[] famil[i];
    }
    delete[] famil;
}
