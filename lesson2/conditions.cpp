#include <iostream>

enum Status{
	Online, Offline, Unknown
};

int main(){
	int num1, num2;
	std::cin >> num1 >> num2;
	if(num1 == num2){
		std::cout << "Numbers are equal\n";
	}else if(num1 > num2){
		std::cout << "First number is bigger\n";
	}else{
		std::cout << "Second number is bigger\n";
	}
	// Оператори порівняння:
	// ==
	// !=
	// >
	// <
	// >=
	// <=
	
	int age = 0;
	std::cout << "Enter your age: ";
	std::cin >> age;
	std::cout << (age >= 18 ? "You can vote!\n" : "You can't vote\n");
	
	int weekDay = 0;
	std::cout << "Enter week day number: ";
	std::cin >> weekDay;
	
	switch(weekDay){
		case 1: std::cout<<"Monday"; break;
		case 2: std::cout<<"tuesday"; break;
		case 3: std::cout<<"wendesday"; break;
		case 4: std::cout<<"thursday"; break;
		case 5: std::cout<<"friday"; break;
		case 6: std::cout<<"saturday"; break;
		case 7: std::cout<<"sunday"; break;
		default: std::cout<<"Incorrect week day!\n";
	}
	
	int num1D, num2D;
	char action;
	std::cin >> num1D >> num2D >> action;
	
	switch(action){
		case '+':std::cout << num1D + num2D<< "\n"; break;
		case '-':std::cout << num1D - num2D<< "\n"; break;
		case '*':std::cout << num1D * num2D << "\n"; break;
		case '/':std::cout << num1D / num2D << "\n"; break;
		default: std::cout << "Incorrect operation!\n";
	}
	
	Status userStatus = Status::Online;
	switch(userStatus){
		case Online: std::cout << "User is online!\n";break;
		case Offline: std::cout << "User is offline!\n";break;
		case Unknown: std::cout << "User status is unknown!\n";break;
		
		
	}
}
