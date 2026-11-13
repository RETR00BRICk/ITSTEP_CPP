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
			float arr[size]{3.03, 0.1, -10.9, 55.4, 2.1, 10.01, 7.3, 4.2, 12.3, -5.7};
			
			int min_i = 0, max_i = 0;
			for(int i = 0; i < size; i++){
				if(arr[i] > arr[max_i]) max_i = i;
				if(arr[i] < arr[min_i]) min_i = i;
			}
			float product_minmax = 1.0f;
			if(max_i > min_i){
				for(int i = min_i+1; i < max_i; i ++){
					product *= arr[i];
				}
			}else{
				for(int i = max_i+1; i < min_i; i ++){
					product *= arr[i];
				}
			}
			float product_even = 1.0f;
			float negative_sum = 0.0f;
			for(int i = 0; i < size; i++){
				if(i%2 == 0.0f) product_even *= arr[i];
				if(arr[i] < 0.0f) negative_sum += arr[i];
			}
		}
	}
}
