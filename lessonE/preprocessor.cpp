#include <iostream>
#include <cstring>


#ifdef _WIN32
    #include <Windows.h>
#endif

#define PI 3.14
//#define SQR(X) (X) * (X)
//#define FOREVER while(true)
//#define START {
//#define END }



int main()
{

#pragma region Set Code Page
#ifdef _WIN32
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
#endif
#pragma endregion

    char* dest = new char[20];
    char source[] = "hello, world";
    
    strcpy(dest, source);

    delete[] dest;

#pragma warning(disable: 4996)

//#undef PI
    //std::cout << PI << '\n';
    //FOREVER
    //    START
    //        std::cout << "infinte loop" << '\n';
    //    END

    //std::cout << 2 * 2 << '\n';
    //std::cout << SQR(2) << '\n';

    //std::cout << 3.14 << '\n';
    //std::cout << PI << '\n';

    //int* arr = new int[10];

    //delete[] arr;
}
