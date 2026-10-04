#include <iostream>
int main(){
	int length;
	std::cin >> length;
	int array[length]{};
	
	std::cout<<sizeof(array)/4;
}
