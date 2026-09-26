#include <iostream>
#include <ctime>
#include <cstdlib>
int main(){
	int choice;
	std::cout << "Choose task number (1 - 6)";
	std::cin >> choice;
	switch(choice){
		case 1:{
			int end;
			std::cout << "Enter range end >>> ";
			std::cin >> end;
			if(end > 0){
				for(int i =0; i <= end; i++){
					std::cout << i << " ";
				}
			}else{
				for(int i = 0; i >= end; i--){
					std::cout << i << " ";
				}
			}
			break;
		}
		case 2:{
			int num1, num2;
			std::cout << "Enter range start and range end >>> ";
			std::cin >> num1 >> num2;
			int start = num1 < num2 ? num1 : num2;
			int end = num1 > num2? num1 : num2;
			std::cout << "All numbers in range : ";
			for(int i = start; i <= end; i++){
				std::cout << i << '|';
			}
			std::cout << "\nEven numbers = ";
			for(int i = start; i <= end; i++){
				if(i % 2 == 0) std::cout << i << '|';
			}
			std::cout << "\nOdd numbers = ";
			for(int i = start; i <= end; i++){
				if(i % 2 != 0) std::cout << i << '|';
			}
			std::cout << "\nMultiple of 7 = ";
			for(int i = start; i <= end; i++){
				if(i % 7 == 0) std::cout << i << '|';
			}
			std::cout << "\n\n";
			break;
		}
		case 3:{
			int num1, num2;
			std::cout << "Enter range start and range end >>> ";
			std::cin >> num1 >> num2;
			int start = num1 < num2 ? num1 : num2;
			int end = num1 > num2? num1 : num2;
			int summ = 0;
			for(int i = start; i <= end; i++){
				summ += i;
			}
			std::cout << "Summ = " << summ;
			break;
		}
		case 4:{
			int summ = 0;
			std::cout << "Start entering numbers:";
			while(true){
				int num;
				std::cin >> num;
				if(num != 0){
					summ += num;
				}else{
					break;
				}
			}
			std::cout << "Summ of your numbers = " << summ << "\n\n";
			break;
		}
		case 5:{
			srand(time(0));
			int num = rand() % 500 + 1;
			int tries = 0;
			std::cout << 
			"Number generated. Try to guess it!\n" <<
			"Enter 0 if you don't want to play anymore\n";
			while(true){
				int guess;
				tries ++;
				std::cout << "Enter your guess >>> ";
				std::cin >> guess;
				if(guess == 0){
					std::cout << "Looser... \n\n";
					break;
				}else if(guess == num){
					std::cout << "Congrats! You guessed it!\n";
					std::cout << "It took you " << tries << " tries\n\n";
					break;
				}else if(guess < num){
					std::cout << "Try bigger number!\n";
				}else{
					std::cout << "Try smaller number!\n";
				}
			}
			break;
		}
		case 6:{
			const float usd_uah = 44.7f;
			const float usd_eur = 0.88f;
			float input_amount;
			int input_currency;
			int output_currency;
			
			std::cout << 
			"[1] - UAH\n" <<
			"[2] - USD\n" << 
			"[3] - EUR\n" <<
			"What currency do you want co convert? >>> ";
			std::cin >> input_currency;
			std::cout << "What currency do you want to convert TO? >>> ";
			std::cin >> output_currency;
			std::cout << "Enter amount to convert >>> ";
			std::cin >> input_amount;
			float input_usd = 0;
			bool currency_valid = input_currency != output_currency;
			switch(input_currency){
				case 1: input_usd = input_amount / usd_uah; break;
				case 2: input_usd = input_amount; break;
				case 3: input_usd = input_amount / usd_eur; break;
				default: currency_valid = false;
			}
			float output_amount;
			switch(output_currency){
				case 1: output_amount = input_usd * usd_uah; break;
				case 2: output_amount = input_usd; break;
				case 3: output_amount = input_usd * usd_eur; break;
				default: currency_valid = false;
			}
			if(currency_valid){
				std::cout << "result = " << output_amount;
			}else{
				std::cout << "error! chosen currencies are incorrect or identical!";
			}
			std::cout << "\n\n";
			break;
		}
		default:{
			std::cout << "Incorrect task!\n";
		}
	}

}
