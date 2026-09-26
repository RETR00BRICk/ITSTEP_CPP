//#include <iostream>
//#include <cstdlib>
//#include <ctime>

int main(){
	//int counter = 0;
	//while(counter < 5){
	//	std::cout << counter << ' ';
	//	counter++;
	//}
	
	//int counter = 0;
	//do{
	//	std::cout << counter++ << ' ';
	//}while(counter < 5);
	
	/*for(int i = 0; i < 10; ++i){
		std::cout << i << ' ';
	}
	
	int counter = 9;
	for(;counter <= 20; counter += 3){
		std::cout << counter << ' ';
	}
	
	for (;;){
		std::cout << "this is infinite\n";
	}
	
	for(int i = 0; ; i+=10){
		std::cout << i << ' ';
	}
	
	while(true){
		char choice = 0;
		std::cout<<"Menu: \n";
		std::cout << "Do you want to quit? ";
		std::cin >> choice;
		if(choice == 'q'){
			break;
		}
	}
	
	for(int i = 0; i < 10; ++i){
		if(i % 2 == 0) continue;
		std::cout << i << ' ';
	}
	
	for(int i = 0; i < 5; i++){
		std::cout << i << '\n';
		for(int j = 0; j < 6; j++){
			std::cout<<j<<' ';
		}
		std::cout << '\n';
	}*/
	
	//srand(time(0));
	int min = 5;
	int max = 9;
	//int random_number = rand() % (max - min + 1) + min;
	//std::cout << random_number << '\n';
	return min + max;
}
