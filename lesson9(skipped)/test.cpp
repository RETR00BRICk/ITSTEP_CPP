#include <iostream>
/*int* foo(){
	int a = 10;
	return &a;
}*/
int main(){
	//int *ptr = foo();
	//std::cout << ptr << '\n';
	int a = 25;
	int* const ptr = &a;
	*ptr = 20;

	std::cout << a;
}
//* const 
