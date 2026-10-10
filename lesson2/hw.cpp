#include <iostream>

int main() {
	int task;
	std::cout << "Enter task num: ";
	std::cin >> task;
	switch(task){
		case 1:{
			int max_num = 0, temp = 0;
			std::cout << "Enter 7 numbers: ";
			
			std::cin >> temp; 
			max_num = temp;
			std::cin >> temp; if (temp > max_num) max_num = temp;
			std::cin >> temp; if (temp > max_num) max_num = temp;
			std::cin >> temp; if (temp > max_num) max_num = temp;
			std::cin >> temp; if (temp > max_num) max_num = temp;
			std::cin >> temp; if (temp > max_num) max_num = temp;
			std::cin >> temp; if (temp > max_num) max_num = temp;

			std::cout << "Max number: " << max_num << '\n';
			break;
		}
		case 2:{
			
		}
		case 3:{
			
		}
		case 4:{
			int ab_distance, bc_distance;
			
		}
	}

}
