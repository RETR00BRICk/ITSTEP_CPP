#include <iostream>

void someFunc(){
	std::cout << "Some output\n";
}
inline int add(int a, int b){
	return a+b;
}

int factorialLoop(int number){
	int result = 1;
	for(int i = 2; i <= number; i++){
		result *= i;
	}
	return result;
}

int factorialRecursion(int n){
	if(n == 1) return 1;
	else return n * factorialRecursion(n-1);
}

int main(){
	//std::cout << add(10, 32) << '\n';
	//std::cout << 10 + 32 << '\n';
}
