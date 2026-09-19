#include <iostream>

int main(){
	//TASK 1:
	std::cout << "Enter year >>> ";
	int year;
	std::cin >> year;
	bool divided_by_400 = year%400 == 0;
	bool divided_by_100 = year%100 == 0;
	bool divided_by_4 = year%4 == 0;
	int days = 365 + divided_by_400 + divided_by_4 * !divided_by_100; //моё изначальное решение
	std::cout << "Days in year: " << days << "\n\n";
	/*нейронка подсказала такое решение чтобы не использовать логические операторы:
	int days = 365 + divided_by_400 + divided_by_4 - divided_by_100;
	*/
	
	//TASK 2:
	std::cout << "Enter dollars >>> ";
	int dollars;
	std::cin >> dollars;
	std::cout << "Enter cents >>> ";
	int cents;
	std::cin >> cents;
	
	dollars += cents / 100;
	cents = cents % 100;
	std::cout << dollars << " dollars " << cents << " cents\n\n"; 
	
	//TASK 3:
	std::cout << "Etner parallelepiped parameters:\n";
	float l;
	std::cout << "Length (cm) >>> ";
	std::cin >> l; 
	float w;
	std::cout << "Width (cm) >>> ";
	std::cin >> w;
	float h;
	std::cout << "Height (cm) >>> ";
	std::cin >> h;
	
	std::cout << "Volume = " << w*l*h << " cm^3\n\n";
	
	//TASK 4:
	std::cout << "Enter map parameters:\n";
	std::cout << "Map scale (kilometers in one cm) >>> ";
	float scale;
	std::cin >> scale;
	std::cout << "Distance between two cities on map (cm) >>> ";
	float distance;
	std::cin >> distance;
	std::cout << "Distance between cities " << distance * scale << " km\n\n";
	
	
	//TASK 5:
	std::cout << "Enter sphere radius >>> ";
	float radius;
	std::cin >> radius;
	std::cout << "Sphere volume = " << (4 * 3.1415f * radius * radius * radius)/3 << "\n";
}
