#include <iostream>
int main(){
	int choice;
	std::cout << "Which task to load? >>> ";
	std::cin >> choice;
	switch(choice){
		case 1:{
			int incomes[12];
			int total = 0;
			int max_income_month_index = 0;
			int min_income_month_index = 0;
			std::cout << "Start entering incomes for each month\n";
			for(int i = 0; i < 12; i++){
				std::cout << "Enter income for month №" << i+1 << " >>> ";
				int income;
				std::cin >> income;
				incomes[i] = income;
				if(income > incomes[max_income_month_index]){
					max_income_month_index = i;
				}
				if(income < incomes[min_income_month_index]){
					min_income_month_index = i;
				}
				total += income;
			}
			std::cout << "Total income of the year: " << total << '\n';
			std::cout << "Average income of the mobth: " << total/12.0f << '\n';
			std::cout << "Max income month : " << max_income_month_index + 1 << "\n";
			std::cout << "Min income month : " << min_income_month_index + 1 << "\n\n";
			break;
 		}
 		case 2:{
			int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
			for(int i = 9; i >= 0; i--){
				std::cout << array[i] << " ";
			}
			std::cout << "\n\n";
			break;
		}
		case 3:{
			int sides[5];
			int summ = 0;
			for(int i = 0; i < 5; i ++){
				while(true){
					int side;
					std::cout << "Enter pentagon side >>> ";
					std::cin >> side;
					if(side > 0){
						sides[i] = side;
						summ += side;
						break;
					}
					std::cout << "Invalid size! Try again \n";
				}
			}
			bool valid = true;
			for(int i = 0; i < 5; i ++){
				int curr_side = sides[i];
				int other_sides_summ = 0;
				for(int j = 0; j < 5; j ++){
					if(j == i) continue;
					other_sides_summ += sides[j];
				}
				if(curr_side >= other_sides_summ){
					valid = false;
					break;
				}
			}
			if(valid){
				std::cout << "Perimeter = " << summ;
			}else{
				std::cout << "Invalid side sizes!";
			}
			std::cout << "\n\n";
			break;
		}
		case 4:{
			int array[9] = {0, -11, 0, 12, 54, 0, 0, -40, 11};
			
			
			for(int i = 1; i < 9; i++){
				for(int j = i; j > 0; j--){
					if(array[j] != 0 && array[j-1] == 0){
						array[j-1] = array[j];
						array[j] = 0;
					}else{
						break;
					}
				}
			}
			for(int i = 0; i < 9; i++){
				if(array[i] == 0) array[i] = -1;
				std::cout << array[i] << ' ';
			}
			break;
		}
		case 5:{
			int arr1[5] =  { 10, 0, 52, -10, -44 };
			int arr2[5] =  { 54, 0, -100, 12, 4 };
			int arr3[10] = {};
			int arr3_counter = 0;
			//ABOVE ZERO
			for(int i = 0; i < 10; i++){
				if(i < 5){
					if(arr1[i] > 0){
						arr3[arr3_counter] = arr1[i];
						arr3_counter++;
					}
				}else{
					if(arr2[i-5] > 0){
						arr3[arr3_counter] = arr2[i-5];
						arr3_counter++;
					}
				}
			}
			//ZERO
			for(int i = 0; i < 10; i++){
				if(i < 5){
					if(arr1[i] == 0){
						arr3_counter++;
					}
				}else{
					if(arr2[i-5] == 0){
						arr3_counter++;
					}
				}
			}
			//BELOW ZERO
			for(int i = 0; i < 10; i++){
				if(i < 5){
					if(arr1[i] < 0){
						arr3[arr3_counter] = arr1[i];
						arr3_counter++;
					}
				}else{
					if(arr2[i-5] < 0){
						arr3[arr3_counter] = arr2[i-5];
						arr3_counter++;
					}
				}
			}
				
			for(int i = 0; i < 10; i++){
				std::cout << arr3[i] << ' ';
			}
			break;
		}
	}
}
