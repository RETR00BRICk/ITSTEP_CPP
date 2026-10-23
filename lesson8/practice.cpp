#include <iostream>
#include <ctime>
#include <cstdlib>

float Pow(float number, int power){
	if(power == 0) return 1;
	
	if(power > 0) return number * Pow(number, power - 1);
	else return 1.0f/number * Pow(number, power + 1);
}

void DrawStars(int count){
	if(count <= 0) return;
	std::cout << '*';
	DrawStars(count - 1);
}

int CountSumInRange(int start, int end){
	if(start > end){
		int temp = start;
		start = end;
		end = temp;
	}
	if(start == end) return start;
	return start + CountSumInRange(start + 1, end);
}

int main(){
	int choice;
	std::cout << "Enter task number(1-4) >>> ";
	std::cin >> choice;
	switch(choice){
		case 1:{
			float num;
			int power;
			std::cout << "Enter number >>> ";
			std::cin >> num;
			std::cout << "Enter power (only int) >>> ";
			std::cin >> power;
			std::cout << num << '^' << power << " = " << Pow(num, power) << "\n\n";
			break;
		}
		case 2:{
			int num;
			std::cout << "Enter the number of stars >>> ";
			std::cin >> num;
			DrawStars(num);
			std::cout << "\n\n";
			break;
		}
		case 3:{
			int start, end;
			std::cout << "Enter range start >>> ";
			std::cin >> start;
			std::cout << "Enter range end >>> ";
			std::cin >> end;
			std::cout << "Sum = " << CountSumInRange(start, end);
			break;
		}
		case 4:{
			srand(time(0));
			const int size = 100;
			int arr[size]{};
			std::cout << "ARRAY (100):\n\n";
			for(int i = 0; i < size; i++){
				arr[i] = rand() % 100 + 100;
				if(i % 10 == 0) std::cout << '\n';
				std::cout << '[' << arr[i] << "] ";
				
			}
		}
	}
}
