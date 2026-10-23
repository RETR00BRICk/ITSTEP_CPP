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
			int ab_distance, bc_distance, weight;
			std::cout << "Enter distance between A and B in km >>> ";
			std::cin >> ab_distance;
			std::cout << "Enter distance between B and C in km >>> ";
			std::cin >> bc_distance;
			std::cout << "Enter weight in kg >>> ";
			std::cin >> weight;
			int consumption;
			if(weight <= 500) consumption = 1;
			else if(weight <= 1000) consumption = 4;
			else if(weight <= 1500) consumption = 7;
			else if(weight <= 2000) consumption = 9;
			if(weight > 2000){
				std::cout << "Too much weight! Can't take off!\n\n";
			}else{
				int ab_fuel_required = consumption * ab_distance;
				int bc_fuel_required = consumption * bc_distance;
			    const int max_fuel_amount = 300;
			    if(ab_fuel_required > max_fuel_amount or bc_fuel_required > max_fuel_amount){
					std::cout << "Unable to make a flight, not enough fuel!\n";
				}else{
					int remaining_after_ab = max_fuel_amount - ab_fuel_required;
					int refuel_amount = bc_fuel_required - remaining_after_ab;
					if(refuel_amount > 0){
						std::cout << "You need to refuel " << refuel_amount << " liters\n\n";
					}else{
						std::cout << "You don't need to refuel\n\n";
					}
				}
			}
			break;
		}
		case 3:{
			float salary1 = 200.0f, salary2 = 200.0f, salary3 = 200.0f;
			float sales1, sales2, sales3;
			std::cout << "Enter sales of the first manager >>> ";
			std::cin >> sales1;
			std::cout << "Enter sales of the second manager >>> ";
			std::cin >> sales2;
			std::cout << "Enter sales of the third manager >>> ";
			std::cin >> sales3;
			
			if(sales1 <= 500) salary1 += sales1*0.03f;
			else if(sales1 <= 1000) salary1 += sales1*0.05f;
			else salary1 += sales1*0.08f;
			
			if(sales2 <= 500) salary2 += sales2*0.03f;
			else if(sales2 <= 1000) salary2 += sales2*0.05f;
			else salary2 += sales2*0.08f;
			
			if(sales3 <= 500) salary3 += sales3*0.03f;
			else if(sales3 <= 1000) salary3 += sales3*0.05f;
			else salary3 += sales3*0.08f;
			
			int best_manager = 1;
			float best_sales = sales1;
			if(sales2 > best_sales) {best_manager = 2; best_sales = sales2;}
			if(sales3 > best_sales) {best_manager = 3; best_sales = sales3;}
			std::cout << "Manager number " << best_manager << " is the best! +200$\n";
			switch(best_manager){
				case 1: salary1 += 200.0f; break;
				case 2: salary2 += 200.0f; break;
				case 3: salary3 += 200.0f; break;
			}
			std::cout << "First manager salary = " << salary1 << '\n';
			std::cout << "Second manager salary = " << salary2 << '\n';
			std::cout << "Third manager salary = " << salary3 << '\n';
			break;
		}
		case 4:{
			std::cout << "[1] Enter desired income and late arrives count\n";
			std::cout << "[2] Enter code lines count and desired income\n";
			std::cout << "[3] Enter code lines count and late arrives count\n";
			std::cout << "\nEnter choice(1-3) >>> ";
			int choice;
			std::cin >> choice;
			if(choice >= 1 and choice <= 3){
				switch(choice){
					case 1:{
						std::cout << "Enter desired income ($) >>> ";
						float income;
						int late_arrives;
						std::cin >> income;
						std::cout << "Enter late arrives count >>> ";
						std::cin >> late_arrives;
						float money_lost = (late_arrives/3) * 20;
						float total_amount = money_lost + income;
						std::cout << "Vasya has to write " << total_amount*2 << " lines of code\n";
						break;
					}
					case 2:{
						std::cout << "Enter lines of code count >>> ";
						int lines_of_code;
						float income;
						std::cin >> lines_of_code;
						std::cout << "Enter desired income ($) >>> ";
						std::cin >> income;
						float money_made = lines_of_code/2.0f;
						float money_left = money_made - income;
						
						if(money_left >= 0.0f){
							int late_count = int(money_left/20)*3 + 2;
							std::cout << "Vasya can be late " << late_count << " times\n";
						}else{
							std::cout << "Vasya cannot be late!\n";
						}
						break;
					}
					case 3:{
					    int late_arrives, lines_of_code;
						std::cout << "Enter lines of code count >>> ";
						std::cin >> lines_of_code;
						std::cout << "Enter late arrives count >>> ";
						std::cin >> late_arrives;
						float money_made = lines_of_code/2.0f;
						float money_lost = (late_arrives/3) * 20;
						if(money_made > money_lost){
							std::cout << "Vasya will be paid " << money_made - money_lost << " $\n";
						}else{
							std::cout << "Vasya won't be paid :(\n";
						}
						break;
					}
				}
			}else{
				std::cout << "Incorrect choice\n";
			}
			break;
		}
	}

}
