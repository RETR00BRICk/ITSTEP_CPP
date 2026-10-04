#include <iostream>

int defaul_search(int* arr, int size, int target){
	int searchIndex = -1;
	int left = 0;
	int right = size - 1;
	
	while(left <= right){
		int mid = left + (right - left) / 2;
		if(arr[mid] > target){
			right = mid - 1;
		}else if(arr[mid] < target){
			left = mid + 1;
		}else{
			searchIndex = mid;
			break;
		}
	}
	return searchIndex;
}

int average_search(int* arr, int size, int target){
	int searchIndex = -1;
	int left = 0;
	int right = size - 1;
	
	while(left <= right){
		int mid = (left + right) / 2;
		if(arr[mid] > target){
			right = mid - 1;
		}else if(arr[mid] < target){
			left = mid + 1;
		}else{
			searchIndex = mid;
			break;
		}
	}
	return searchIndex;
}

int main(){
	int size = 100;
	int arr[size]{};
	std::cout << "ARRAY:\n";
	for(int i = 0; i < size; i ++){
		arr[i] = i-50;
		std::cout << arr[i] << '|';
	}
	for(int i = 0; i < 100; i++){ std::cout << "/\/"; }
	std::cout << "\n\n\n";
	int default_error_count = 0;
	int average_error_count = 0;
	for(int i = -50; i < 50; i++){
		std::cout << "Running DEFAULT search for [" << i << "] -> ";
		int result = defaul_search(arr, 100, i);
		if(result != -1){
			std::cout << "Success! : " << result << '\n';
		}else{
			std::cout << "FAIL!\n";
			default_error_count ++;
		}
		std::cout << "Running AVERAGE search for [" << i << "] -> ";
		result = average_search(arr, 100, i);
		if(result != -1){
			std::cout << "Success! : " << result << '\n';
		}else{
			std::cout << "FAIL!\n";
			average_error_count ++;
		}
		std::cout<<'\n';
	}
	std::cout<<"### RESULTS ###\n\n";
	std::cout<<"Default search errors: " << default_error_count << '\n';
	std::cout<<"Average search errors: " << average_error_count << '\n';
}
