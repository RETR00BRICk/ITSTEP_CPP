#include <iostream>

int* allocateMemory() {
 return new int(15);
}
/*
int* returnPtr() {
 int number = 12;
 return &number;
}

char* returnPtr2() {
 char number = 'Y';
 return &number;
}
*/
void printArr(int* arr, int size) {
 for (int i = 0; i < size; ++i) {
  std::cout << arr[i] << ' ';
 }
}

int main()
{

	//NEW + FREE!!!???
	int size = 0;

	std::cin >> size;
	int* arr = new int[size] {20};
	//int* arr = (int*)malloc(size * sizeof(int));
	//int* arr = (int*)calloc(size, sizeof(int));
	for(int i = 0; i < size; i++){
		//arr[i] = i;
	}
	printArr(arr,size);
	//free(arr);
	
	/*
	int* arr = new int[size];

	for (int i = 0; i < size; ++i) {
		arr[i] = i;
		std::cout << arr[i] << ' ';
	}

	int* temp = new int[size + 1];
	int elem = 0;
	std::cin >> elem;

	for (int i = 0; i < size; ++i) {
		temp[i] = arr[i];
	}
	temp[size] = elem;
	size++;
	delete[] arr;
	arr = temp;
	temp = nullptr;
	std::cout << '\n';
	printArr(arr, size);

	delete[] arr;

	//int* ptr = returnPtr();

	//char* ptr2 = returnPtr2();

	//std::cout << *ptr;

	//int number = 10;

	//for (long long i = 0; i < 1000000000; ++i)
	//{
	// int* ptr = allocateMemory();

	// delete ptr;
	// //delete ptr;
	//}

	//std::cout << *ptr << '\n';*/
}
