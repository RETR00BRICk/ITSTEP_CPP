#include <iostream>

int main(){
	//TASK 1:
	/*std::cout << "Enter seconds >>> ";
	int seconds;
	std::cin >> seconds;
	int minutes = seconds/60;
	int hours = minutes/60;
	seconds = seconds % 60;
	minutes = minutes % 60;
	std::cout << hours << " hours " << minutes << " minutes " << seconds << " seconds\n\n";
	
	//TASK 2:
	std::cout << "Enter money amount >>> ";
	float total;
	std::cin >> total;
	int total_cents = total * 100 + 0.5f; //нужно добавить 0.5f иначе будет ошибка в +- 1 цент. Например 12.53 будет преобразовано в 12 и 53
	int dollars = total_cents / 100;
	int cents = total_cents % 100;
	std::cout << dollars << " dollars " << cents << " cents\n\n";
	
	//TASK 3:
	int distance;
	float total_time;
	std::cout << "Enter distance in meters >>> ";
	std::cin >> distance;
	std::cout << "Enter time in MINUTES.SECONDS >>> ";
	std::cin >> total_time;
	int min = total_time;
	int sec = (total_time - min) * 100.0f + 0.5f;
	min += sec/60; //корректная обратока если юзер введет больше 59 секунд
	sec = sec%60; //но если будет введено больше 99 секунд, то нормально это работать не будет
	int sec_total = min * 60 + sec;
	std::cout << "Distance: " << distance << " meters\n";
	std::cout << "Time: " << min << " min " << sec << " sec = " << sec_total << " sec\n";
	float speed = (3.6f * distance) / sec_total;
	std::cout << "Speed was: " << speed << " KM/H\n";
	
	//TASK 4:
	int days;
	std::cout << "Enter days count >>> ";
	std::cin >> days;
	int weeks = days/7;
	days = days%7;
	std::cout << weeks << " weeks and " << days << " days\n";
	
	//TASK 5:
	int distance;
	int time;
	std::cout << "Enter distance in meters >>> ";
	std::cin >> distance;
	std::cout << "Enter time in minutes >>> ";
	std::cin >> time;
	std::cout << "Speed = " << distance*60.0f/(time*1000.0f) << " KM/H\n";*/
	
	//TASK 6:
	float distance;
	float consumption;
	float price1, price2, price3;
	std::cout << "Enter distance in km >>> ";
	std::cin >> distance;
	std::cout << "Enter fuel consumption for 1 km  >>> ";
	std::cin >> consumption;
	
}
