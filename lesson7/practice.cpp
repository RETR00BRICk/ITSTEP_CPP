#include <iostream>

void DrawRect(int width, int height, char symbol){
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			std::cout << symbol;
		}
		std::cout << '\n';
	}
}

int GetFactorialOf(int num){
	int result = 1;
	for(int i = 1; i <= num; i++){
		result *= i;
	}
	return result;
}

bool IsNumberPrime(int num){
    if (num <= 1) {
        return false;
    }
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

template<typename T>
T GetCubeOf(T num){
	return num * num * num;
}

template<typename T>
T Max(T a, T b){
	return a > b ? a : b;
}

template<typename T>
bool IsNuberPositive(T num){
	return num >= 0 ? true : false;
}

template<typename T>
void GetArrayMinMaxIndexes(int& max_index, int& min_index, T* arr, int size){
	max_index = 0;
	min_index = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] > arr[max_index]) max_index = i;
		if(arr[i] < arr[min_index]) min_index = i;
	}
}

template<typename T>
void PrintArrayInfo(T* arr, int size){
	int max_index, min_index;
	GetArrayMinMaxIndexes(max_index, min_index, arr, size);
	std::cout << "Max element is " << arr[max_index] << " with index of " << max_index << '\n';
	std::cout << "Min element is " << arr[min_index] << " with index of " << min_index << "\n\n";
}

template<typename T>
void ReverseArray(T* arr, int size){
	for(int i = 0; i < size/2; i++){
		T temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}

template<typename T>
void PrintArray(T* arr, int size){
	std::cout << "Array (" << size << ") : {";
	for(int i = 0; i < size; i++){
		std::cout << arr[i];
		if(i != size - 1) std::cout << "; ";
	}
	std::cout << "}\n";
}

int GetPrimeCountInArray(int* arr, int size){
	int count = 0;
	for(int i = 0; i < size; i++){
		count += IsNumberPrime(arr[i]);
	}
	return count;
}

int main(){
	int task;
	std::cout << "Enter task number (1-9): ";
	std::cin >> task;
	switch(task){
		case 1:{
			int w, h;
			char symbol;
			std::cout << "Enter width >>> ";
			std::cin >> w;
			std::cout << "Enter height >>> ";
			std::cin >> h;
			std::cout << "Enter symbol >>> ";
			std::cin >> symbol;
			DrawRect(w, h, symbol);
			break;
		}
		case 2:{
			int num;
			std::cout << "Enter number >>> ";
			std::cin >> num;
			std::cout << "Factorial = " << GetFactorialOf(num) << "\n\n";
			break;
		}
		case 3:{
			int num;
			std::cout << "Enter number >>> ";
			std::cin >> num;
			std::cout << (IsNumberPrime(num) ? "Number is prime\n\n" : "Number is not prime\n\n");
			break;
		}
		case 4:{
			float num;
			std::cout << "Enter number >>> ";
			std::cin >> num;
			std::cout << "The cube of " << num << " is " << GetCubeOf(num) << "\n\n";
			break;
		}
		case 5:{
			float a, b;
			std::cout << "Enter first number >>> ";
			std::cin >> a;
			std::cout << "Enter second number >>> ";
			std::cin >> b;
			std::cout << "The max number is " << Max(a,b) << "\n\n";
			break;
		}
		case 6:{
			float num;
			std::cout << "Enter number >>> ";
			std::cin >> num;
			std::cout << (IsNuberPositive(num) ? "Number is positive\n\n" : "Number is negative\n\n");
			break;
		}
		case 7:{
			const int size = 10;
			float arr[size] = {0.1, 0.2, 0.3, 0.14, -1.3, 5.3, 0.33, 0.551, 0.339, -12.3};
			PrintArrayInfo(arr, size);
			break;
		}
		case 8:{
			const int size = 10;
			int arr[size] = {1,2,3,4,5,6,7,8,9,10};
			ReverseArray(arr, size);
			PrintArray(arr, size);
			break;
		}
		case 9:{
			const int size = 10;
			int arr[size] = {4,4,7,4,3,4,4,8,9,10};
			std::cout << "There are " << GetPrimeCountInArray(arr, size) << " prime numbers in the array\n\n";
			break;
		}
		default:{
			std::cout << "Incorrect task number\n\n";
		}
		
	}

}
