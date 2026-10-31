#include <iostream>
#include <cstring>

void printArr(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
}

int myStrLen(char* str) {
    int len = 0;
    while (*str != '\0') {
        ++len; ++str;
    }
    return len;
}

int main()
{
	char hello[] = "hello, world!";
	char* charW = strchr(hello, 'w');
	char* llo = strstr(hello, "llo");
	std::cout << charW << ' ' << *charW << '\n';
	/*
	char str1[] = "car";
	char str2[] = "carpet";
	int result = strcmp(str1, str2);
	if(result == 0){
		std::cout << str1 << " equals" << str2 << '\n';
	}else if(result < 0){
		std::cout << str1 << " less than " << str2 << '\n';
	}else{
		std::cout << str1 << " greater than " << str2 << '\n';
	}

    char buffer[256] = "Hello";
	strcat(buffer, ", ");
	std::cout << buffer << '\n';
	char name[] = "Vova";
	strcat(buffer, name);
	std::cout << buffer << '\n';
    
    //char fullName[50];
    //char birthDate[11];

    std::cout << "Enter full name: ";
    //std::cin >> fullName;
    std::cin.getline(buffer, 256);
    char* fullName = new char[strlen(buffer) + 1];
    for (int i = 0;i < strlen(buffer) + 1; ++i)
    {
        fullName[i] = buffer[i];
    }

    std::cout << "Hello, " << fullName << '\n';
    std::cout << strlen(fullName) << '\n';

    //int age;
    //std::cout << "Enter age: ";
    //std::cin >> age;

    std::cout << "Enter your birth date(dd.mm.yyyy): ";
    std::cin.ignore();
    //std::cin >> birthDate;
    std::cin.getline(buffer, 256);
    char* birthDate = new char[strlen(buffer) + 1];
    strcpy_s(birthDate, strlen(buffer) + 1, buffer);
    std::cout << "Your birth date: " << birthDate << '\n';

    //const int SIZE = 4;
    //int arr[SIZE] = { 10, 12, 14, 5 };

    //char hello[] = "Hello"; // \0

    //std::cout << hello << '\n';
    //std::cout << "Hello, C++" << '\n';

    //std::cout << myStrLen(hello) << '\n';

    //std::cout << hello[3] << '\n';
    //hello[0] = 'Q';
    //std::cout << hello << '\n';*/
}
