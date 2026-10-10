#include <iostream>

void printHello();
void printSum(int a, int b);
int sum(int a, int b);
int sum(int a, int b, int c);
void swap(int first, int second);

//void PrintArr(const int arr[], int size);
//void PrintArr(const double arr[], int size);

void multiplyBy(int arr[], int size, int k);

template<typename T>
void PrintArr(const T arr[], int size);

int main(){
	/*
	printHello();
	//DRY
	std::cout << 10 <<  '+' << 3 << '=' << 10 + 3 << '\n';
	std::cout << 5 <<  '+' << 5 << '=' << 5 + 5 << '\n';
	std::cout << 4 <<  '+' << 5 << '=' << 4 + 9 << '\n';

	printSum(10, 5); //аргументи
	printSum(14, 8); 
	printSum(4, -4); 
	std::cout << sum(13,54) << '\n';
	
	
	int num1 = 12, num2 = 15;
	std::cout << num1 << ' ' << num2 << '\n';
	swap(num1, num2);
	std::cout << num1 << ' ' << num2 << '\n';
	*/
	const int size = 4;
	int arr[size] = {12, -5, 3, 0};
	PrintArr(arr, size);
	//multiplyBy(arr, size, 10);
	//PrintArr(arr, size); //CHANGED!
	
	double arrD[size] = {12.5, 43.6, -0.7, 5.32};
	PrintArr(arrD, size);
	
	char arrC[size] = {'h', 'e', 'l', 'l'};
	PrintArr(arrC, size);
	
	//std::cout << sum(1, 2, 3) << '\n'; //OVERLOAD
	//std::cout << sum(1, 2) << '\n';
}
void multiplyBy(int arr[], int size, int k){
	for(int i = 0; i < size; i++){
		arr[i] *= k;
	}
}

/*void PrintArr(const int arr[], int size){
	//arr[1] = 13; CONST!
	std::cout << "{ ";
	for(int i = 0; i < size; i++){
		
		std::cout << arr[i];
		if(i != size - 1) std::cout << ", ";
	}
	std::cout << " }";
}
void PrintArr(const double arr[], int size){
	std::cout << "{ ";
	for(int i = 0; i < size; i++){
		
		std::cout << arr[i];
		if(i != size - 1) std::cout << ", ";
	}
	std::cout << " }";
}*/
template<typename T>
void PrintArr(const T arr[], int size){
	std::cout << "{ ";
	for(int i = 0; i < size; i++){
		
		std::cout << arr[i];
		if(i != size - 1) std::cout << ", ";
	}
	std::cout << " }";
}

void swap(int first, int second){
	int temp = first;
	first = second;
	second = temp;
}
void printHello(){
	std::cout << "Hello!\n";
}

void printSum(int a, int b){ //параметри
	std::cout << a << '+' << b << '=' << sum(a,b) << '\n';
}

int sum(int a, int b = 15){
	return a + b;
}
int sum(int a, int b, int c){
	return a + b + c;
}

/* CLASSWORK:
#include <iostream>

int global = 10;
const float PI = 3.14;

void printHello();
void printSum(int a, int b);
int sum(int a, int b);
int sum(int a, int b, int c);
void swap(int first, int second);

//void printArr(const int arr[], int size);
//void printArr(const double arr[], int size);
template<typename T, typename U>
void multiplyBy(T arr[], int size, U k);

template<typename T>
void printArr(const T arr[], int size);
void printArr(const bool arr[], int size);

int main()
{
 const int SIZE = 4;
 int arr[SIZE] = { 12, -5, 3, 0 };
 printArr(arr, SIZE);
 std::cout << '\n';

 multiplyBy(arr, SIZE, 5.7);

 double arrD[SIZE] = { 12.5, 43.6, -0.7, 9.23 };
 printArr(arrD, SIZE);
 std::cout << '\n';

 char arrC[SIZE] = { '4', '9', 'h', 'R' };
 printArr(arrC, SIZE);
 std::cout << '\n';

 bool arrB[SIZE] = { true, false, false, true };
 printArr(arrB, SIZE);
 std::cout << '\n';
}

template<typename T>
void printArr(const T arr[], int size) {
 std::cout << "{ ";
 for (int i = 0; i < size; ++i) {
  std::cout << arr[i];
  if (i != size - 1) std::cout << ", ";
 }
 std::cout << " }";
}

void printArr(const bool arr[], int size) {
 std::cout << "{ ";
 for (int i = 0; i < size; ++i) {
  std::cout << (arr[i] ? "true" : "false");
  if (i != size - 1) std::cout << ", ";
 }
 std::cout << " }";
}

template<typename T, typename U>
void multiplyBy(T arr[], int size, U k) {
 for (int i = 0; i < size; ++i) {
  arr[i] *= k;
 }
}

//void printArr(const double arr[], int size) {
// std::cout << "{ ";
// for (int i = 0; i < size; ++i) {
//  std::cout << arr[i];
//  if (i != size - 1) std::cout << ", ";
// }
// std::cout << " }";
//}
//
//void printArr(const int arr[], int size) {
// std::cout << "{ ";
// for (int i = 0; i < size; ++i) {
//  std::cout << arr[i];
//  if (i != size - 1) std::cout << ", ";
// }
// std::cout << " }";
//}

void swap(int first, int second) {
 int temp = first;
 first = second;
 second = temp;
}

void printHello() {
 std::cout << "Hello!\n" << global;
}

void printSum(int a, int b) { // параметри
 std::cout << a << " + " << b << " = " << sum(a, b) << '\n';
}

int sum(int a, int b = 15) {
 return a + b;
}

int sum(int a, int b, int c) {
 return a + b + c;
}
*/
