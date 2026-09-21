#include <iostream>

int main(){
	int task_choice;
	std::cout << "Choose task 1, 2, 3, 4, 5, 6, 7, 8, 9 >>> ";
	std::cin >> task_choice;
	switch(task_choice){
		case 1:{ //скобки для ограничения области видимости. Без них переменные объявленные выше конфликтуют с нижними с идентичным названием
			int number;
			std::cout << "Enter number >>> ";
			std::cin >> number;
			std::cout << (number % 2 == 0 ? "Number is even\n" : "Number is odd\n");
			break;
		}
		case 2:{
			int num1, num2;
			std::cout << "Enter number 1 >>> ";
			std::cin >> num1;
			std::cout << "Enter number 2 >>> ";
			std::cin >> num2;
			std::cout << "Smallest = " << (num1 < num2 ? num1 : num2) << "\n";
			break;
		}
		case 3:{
			int number;
			std::cout << "Enter number >>> ";
			std::cin >> number;
			if(number > 0){
				std::cout << "Number is bigger than zero\n";
			}else if(number < 0){
				std::cout << "Number is smaller than zero\n";
			}else{
				std::cout << "Number is equal to zero\n";
			}
			break;
		}
		case 4:{
			int num1, num2;
			std::cout << "Enter number 1 >>> ";
			std::cin >> num1;
			std::cout << "Enter number 2 >>> ";
			std::cin >> num2;
			if(num1 == num2){
				std::cout << "Numbers are equal\n";
			}else if(num1 < num2){
				std::cout << num1 << " " << num2 << "\n";
			}else{
				std::cout << num2 << " " << num1 << "\n";
			}
			break;
		}
		case 5:{
			int grade1, grade2, grade3, grade4, grade5;
			std::cout << "Enter 5 grades: ";
			std::cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
			float average = (grade1 + grade2 + grade3 + grade4 + grade5)/5.0f;
			if(average >= 4.0f){
				std::cout << "Student can be admitted to the exam\n";
			}else{
				std::cout << "Student can't be admitted to the exam\n";
			}
			break;
		}
		case 6:{
			int number;
			std::cout << "Enter number >>> ";
			std::cin >> number;
			float result = number%2 == 0 ? number*3.0f : number / 2.0f;
			std::cout << "Result = " << result << "\n";
			break;
		}
		case 7:{
			int num1, num2;
			std::cout << "Enter number 1 >>> ";
			std::cin >> num1;
			std::cout << "Enter number 2 >>> ";
			std::cin >> num2;
			char operation;
			std::cout << "Enter operation: ";
			std::cin >> operation;
			switch(operation){
				case '+':std::cout << num1 + num2 << "\n"; break;
				case '-':std::cout << num1 - num2 << "\n"; break;
				case '*':std::cout << num1 * num2 << "\n"; break;
				case '/':
					if(num2 != 0){
						std::cout << (float)num1 / num2 << "\n";
					}else{
						std::cout << "Division by zero\n";
					}
					break;
				default: std::cout << "Incorrect operation!\n";
			}
			break;
		}
		case 8:{
			int num, power;
			std::cout << "Enter number >>> ";
			std::cin >> num;
			std::cout << "Enter power (0-7) >>> ";
			std::cin >> power;
			//мой способ, используя цикл (еще не проходили их):
			if(power < 0 or power > 7){
				std::cout << "Invalid power!\n";
			}else{
				int result = 1;
				for(int i = 0; i < power; i++){
					result *= num;
				}
				std::cout << "Result = " << result << "\n";
			}
			/* если нужно без циклов, то выглядеть будет примерно так:
			
			switch(power){
				case 0: result = 1;
				case 1: result = num;
				case 2: result = num * num;
			и так далее...
			*/
			break;
		}
		case 9:{
			//это доп. задание. Почитал в инете, узнал про ANSI-последовательности, которые должны работать в любом терминале
			//ну я на линуксе тестил у меня все работает, на винде нет возможности, так что не знаю насколько оно кросплатформенное 
			//иишка написала что в стандартной консоли винды без включения какого-то режима это работать не будет
			int fg, bg;
			std::cout<<
			"COLORS: \n"<<
			"0 - black\n"<<
			"1 - red\n"<<
			"2 - green\n"<<
			"3 - yellow\n"<<
			"4 - blue\n"<<
			"5 - magenta\n"<<
			"6 - cyan\n"<<
			"7 - white\n";
			std::cout<<"Enter text color (0-7) >>> ";
			std::cin >> fg;
			std::cout<<"Enter background color (0-7) >>> ";
			std::cin >> bg;
			if(fg >= 0 and fg <= 7 and bg >=0 and bg <= 7){
				fg += 30;
				bg += 40;
				std::cout << "\33[" << fg << ";" << bg << "m"; // обратный слеш это есйекп-последовательность. 33 это код символа ESC который говорит терминалу не выводить текст а читать команду
				for(int i = 0; i < 10; i ++){
					for(int j = 0; j < 5; j++){
						std::cout << "Hello world! ";
					}
					std::cout << "\n";
				}
			}else{
				std::cout << "Invalid input!\n";
			}
			// что конкретно должна выводить программа небыло написано, так что вот прямоугольник из Hello World!

			break;
		}
		default: 
			std::cout << "Invalid task!";
	}
}
