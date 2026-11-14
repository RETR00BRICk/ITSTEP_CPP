#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
	srand(time(0));
	int choice;
	std::cout << "Enter task >>> ";
	std::cin >> choice;
	switch(choice){
		case 1:{
			int arr[10]{};
			std::cout<<"ARRAY(10): | ";
			for(int i = 0; i < 10; i ++){
				arr[i] = rand()%100;
				std::cout << arr[i] << " | ";
			}
			std::cout<<'\n';
			int max = arr[0];
			int min = arr[0];
			for(int i = 0; i < 10; i++){
				if(arr[i] > max) max = arr[i];
				if(arr[i] < min) min = arr[i];
			}
			std::cout << "Max is: " << max << "\nMin is: " << min << '\n';
			break;
		}
		case 2:{
			int incomes[12]{};
			std::cout <<"Enter incomes >>> ";
			for(int i = 0; i < 12; i ++){
				std::cin >> incomes[i];
			}
			int start, end;
			std::cout << "Enter months range start >>> ";
			std::cin >> start;
			std::cout << "Enter months range end >>> ";
			std::cin >> end;
			if(start < 1) start = 1;
			if(start > 12) start = 12;
			if(end < 1) end = 1;
			if(end > 12) end = 12; 
			if(start > end){
				int temp = start;
				start = end;
				end = temp;
			}
			int max_i = start, min_i = start;
			for(int i = start-1; i <= end-1; i++){
				if(incomes[i] > incomes[max_i]) max_i = i;
				if(incomes[i] < incomes[min_i]) min_i = i;
			}
			std::cout << "Min income month number: " << min_i + 1 << '\n';
			std::cout << "Max income month number: " << max_i + 1 << '\n'; 
			break;
		}
		case 3:{
			const int size = 10;
			float arr[size]{-2.5, 1.5, 12.4, 2.0, -1.2, 3.5, 0.5, -8.6, 4.0, -1.0};
			
			int min_i = 0, max_i = 0;
			float product_even = 1.0f;
			float sum_negative = 0.0f;
			int first_negative_i = -1;
			int last_negative_i = -1;
			for(int i = 0; i < size; i++){
				if(arr[i] > arr[max_i]) max_i = i;
				if(arr[i] < arr[min_i]) min_i = i;
				if(i%2 == 0) product_even *= arr[i];
				if(arr[i] < 0.0f){
					sum_negative += arr[i];
					if(first_negative_i == -1) first_negative_i = i;
					last_negative_i = i;
				} 
			}
			float product_minmax = 1.0f;
			float sum_firstlast_negative = 0.0f;
			if(min_i > max_i){
				int temp = min_i;
				min_i = max_i;
				max_i = temp;
			}
			if(max_i - min_i < 2) product_minmax = 0.0f; 
			for(int i = 0; i < size; i++){
				if(i > min_i && i < max_i) product_minmax *= arr[i];
				if(i > first_negative_i && i < last_negative_i) sum_firstlast_negative += arr[i];
			}
			std::cout << "ARRAY: ";
			for(int i = 0; i < size; i++){
				std::cout << arr[i] << ' ';
			}
			std::cout << "\n---------\n";
			std::cout << "Sum of negative elements: " << sum_negative;
			std::cout << "\nProduct of elements between min and max: " << product_minmax;
			std::cout << "\nProduct of elements with even indexes: " << product_even;
			std::cout << "\nSum of elements between first and last negatives: " << sum_firstlast_negative;
			break;
		}
	}
}
