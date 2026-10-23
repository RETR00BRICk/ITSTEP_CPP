#include <iostream>
#include <ctime>
#include <cstdlib>

int* CreateRandomArray(int size){
	int* ptr = new int[size]{};
	for(int i = 0; i < size; i++){
		ptr[i] = rand()%100;
	}
	return ptr;
}
void PrintArray(const int* arr, int size){
	std::cout << "ARRAY (" << size << "):\n";
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}

int main(){
	srand(time(0));
	int choice;
	std::cout << "Enter task num (1-4) >>> ";
	std::cin >> choice;
	switch(choice){
		case 1:{
			int size;
			std::cout << "Enter array size >>> ";
			std::cin >> size;
			int* array_ptr = CreateRandomArray(size);
			PrintArray(array_ptr, size);
			delete[] array_ptr;
			break;
		}
		case 2:{
			
		}
		
	}
}
