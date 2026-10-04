#include <iostream>

int main(){
	const int size = 7;
	int arr[size] = {-10, 0, 12, 5, -8, 100, 64};
	
	//Selection sort
	int curr_index = 0;
	while(curr_index < size){
		int min_index = curr_index;
		
		for(int i = curr_index; i < size; i++){
			if(arr[i] < arr[min_index]){
				min_index = i;
			}
		}
		
		if(min_index != curr_index){
			int temp = arr[curr_index];
			arr[curr_index] = arr[min_index];
			arr[min_index] = temp;			
		}

		
		curr_index++;
	}
	
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << ' ';
	}
	
	/////////////////
	int search;
	std::cin >> search;
	int searchIndex = -1;
	//search algorithm
	//binary
	int left = 0;
	int right = size - 1;
	
	while(left <= right){
		int mid = left + (right - left) / 2;
		if(arr[mid] > search){
			right = mid - 1;
		}else if(arr[mid] < search){
			left = mid + 1;
		}else{
			searchIndex = mid;
			break;
		}
	}
	
	
	
	
	
	
	
	if(searchIndex == -1){
		std::cout << search << " is not found\n";
	}else{
		std::cout << "index of " << search << " is " << searchIndex << "\n\n";
	}
	/*Selection sort
	int curr_index = 0;
	while(curr_index < size){
		int min_index = curr_index;
		
		for(int i = curr_index; i < size; i++){
			if(arr[i] < arr[min_index]){
				min_index = i;
			}
		}
		
		if(min_index != curr_index){
			int temp = arr[curr_index];
			arr[curr_index] = arr[min_index];
			arr[min_index] = temp;			
		}

		
		curr_index++;
	}
	*/
	/*Bubble
	for (int i = 0; i < size; ++i) {
		for (int j = size - 1; j > i; --j) {
			if (arr[j - 1] > arr[j]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	*/	
	/*Insertion
	for(int i = 1; i < size; i++){
		int temp = arr[i];
		int j = i - 1;
		
		while(j >= 0 && arr[j] > temp){
			arr[j + 1] = arr[j];
			j--;
		}
		
		arr[j+1] = temp;
	}
	*/
	
	
	

}
