#include <iostream>
int main(){
	std::cout << "Choose task(1-3): ";
	int task;
	std::cin >> task;
	switch(task){
		case 1:{
			int arr[5][5]{
				{1,2,10,4,0},
				{1,2,3,4,15},
				{1,2,32,4,5},
				{0,0,0,0,-1},
				{6,50,3,2,-100}
			};
			
			int max = arr[0][0];
			int min = arr[0][0];
			float average = 0.0f;
			int summ = 0;
			
			for(int i = 0; i < 5; i++){
				for(int j = 0; j < 5; j++){
					int curr_element = arr[i][j];
					if(curr_element > max){
						max = curr_element;
					}
					if(curr_element < min){
						min = curr_element;
					}
					summ += curr_element;
				}
			}
			
			average = summ/25.0f;
			std::cout << "Sum = " << summ << '\n';
			std::cout << "Average = " << average << '\n';
			std::cout << "Max = " << max << '\n';
			std::cout << "Min = " << min << "\n\n";
			break;
		}
		case 2:{
			int rows = 3;
			int cols = 4;
			int arr[rows][cols]{
				{3,5,6,7},
				{12,1,1,1},
				{0,7,12,1}
			};
			for(int row = 0; row < rows; row++){
				int row_sum = 0;
				for(int col = 0; col < cols; col++){
					std::cout << arr[row][col] << " ";
					row_sum += arr[row][col];
				}
				std::cout << "| " << row_sum << '\n';
			}
		}
	}
}
