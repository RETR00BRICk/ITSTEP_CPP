#include <iostream>
int main(){
	int task;
	std::cout << "Enter task number(1-9) >>> ";
	std::cin >> task;
	switch(task){
		case 1:{
			int number;
			std::cout << "Enter number >>> ";
			std::cin >> number;
			int sum = 0;
			if(number < 500){
				while(number <= 500){
					sum += number;
					number++;
				}
			}else if(number > 500){
				while(number >= 500){
					sum += number;
					number --;
				}
			}else{
				sum = 500;
			}
			std::cout << "The summ equals " << sum;
			break;
		}
		case 2:{
			int base, power;
			float result = 1;
			std::cout << "Enter base (x)>>> ";
			std::cin >> base;
			std::cout << "Enter power (y)>>> ";
			std::cin >> power;
			bool negative = power < 0;
			power = std::abs(power); 
			for(int i = 0; i < power; i++){
				result *= base;
			}
			if(negative) result = 1.0f / result;
			std::cout << "X^Y = " << result;
			break;
		}
		case 3:{
			int sum = 0;
			for(int i = 1; i <= 1000; i++){
				sum += i;
			}
			std::cout << sum/1000.0f;
			break;
		}
		case 4:{
			int num;
			std::cout << "Enter number from 1 to 20 >>> ";
			std::cin >> num;
			if(num < 1 or num > 20){
				std::cout << "Invalid number!";
			}else{
				long long result = 1;
				while(num <= 20){
					result *= num;
					num ++;
				}
				std::cout << result;
			}
			break;
		}
		case 5:{
			int num;
			std::cout << "Enter number >>> ";
			std::cin >> num;
			for(int i = 0; i <= 10; i++){
				std::cout << num << '*' << i << " = " << num*i << '\n';
			}
			break;
		}
		case 6:{
			long long num;
			std::cout << "Enter number >>> ";
			std::cin >> num;
			if(num > 0){
				for(long long i = 1; i*i <= num; i++){
					if(num % (i*i) == 0 && (num/(i*i)) % i != 0){
						std::cout << i << ' '; 
					}
				}
			}else if(num < 0){
				for(long long i = -1; -i*i >= num; i--){
					if(num % (i*i) == 0 && (num/(i*i)) % i != 0){
						std::cout << i << ' '; 
					}
				}				
			}
			break;
		}
		case 7:{
			int num;
			std::cout << "Enter number >>> ";
			std::cin >> num;
			if(num > 0){
				for(int i = 1; i <= num; i ++){
					if(num % i == 0) std::cout << i << ' ';
				}
			}else if(num < 0){
				for(int i = -1; i >= num; i--){
					if(num % i == 0) std::cout << i << ' ';
				}
			}else{
				std::cout << "Infinite amount of dividers";
			}
			break;
		}
		case 8:{
			int num1, num2, min;
			std::cout << "Enter numbers: ";
			std::cin >> num1 >> num2;
			num1 = std::abs(num1);
			num2 = std::abs(num2);
			if(num1 == 0 && num2 == 0){
				min = 0;
				std::cout << "Infinite amount of dividers";
			}
			else if(num1 == 0) min = num2;
			else if(num2 == 0) min = num1;
			else min = num1 < num2 ? num1 : num2;
			
			for(int i = 1; i <= min; i++){
				if(num1 % i == 0 and num2 % i == 0) std::cout << i << ' ';
			}
			break;
		}
		case 9:{
			std::cout << "[1] - Square\n[2] - Rectangle\n[3] - Triangle\n";
			std::cout << "Choose the figure >>> ";
			int choice;
			std::cin >> choice;
			char symbol;
			std::cout << "Choose symbol >>> ";
			std::cin >> symbol;
			switch(choice){
				case 1:{
					int side;
					std::cout << "Enter side length >>> ";
					std::cin >> side;
					side = std::abs(side);
					for(int i = 0; i < side; i ++){
						for(int j = 0; j < side; j++){
							std::cout << symbol;
						}
						std::cout << '\n';
					}
					break;
				}
				case 2:{
					int h, w;
					std::cout << "Enter height >>> ";
					std::cin >> h;
					std::cout << "Enter width >>> ";
					std::cin >> w;
					h = std::abs(h);
					w = std::abs(w);
					for(int i = 0; i < h; i ++){
						for(int j = 0; j < w; j++){
							std::cout << symbol;
						}
						std::cout << '\n';
					}
					break;
				}
				case 3:{
					int h, w;
					std::cout << "Enter height >>> ";
					std::cin >> h;
					std::cout << "Enter width >>> ";
					std::cin >> w;
					h = std::abs(h);
					w = std::abs(w);
					for(int y = 0; y < h; y ++){
						for(int x = 0; x < w; x++){
							if(x*h <= y*w) std::cout << symbol;
							else std::cout << ' ';
						}
						std::cout << '\n';
					}
				}
				break;
			}
		}
	}
}
