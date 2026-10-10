#include <iostream>

int main(){
	int choice;
	std::cout << "Which task to load (1-8) >>> ";
	std::cin >> choice;
	switch(choice){
		case 1:{
			std::cout << "Enter seconds >>> ";
			int seconds;
			std::cin >> seconds;
			int minutes = seconds/60;
			int hours = minutes/60;
			seconds = seconds % 60;
			minutes = minutes % 60;
			std::cout << hours << " hours " << minutes << " minutes " << seconds << " seconds\n\n";
			break;
		}
		case 2:{
			std::cout << "Enter money amount >>> ";
			float total;
			std::cin >> total;
			int total_cents = total * 100 + 0.5f; //нужно добавить 0.5f иначе будет ошибка в +- 1 цент. Например 12.53 будет преобразовано в 12 и 53
			int dollars = total_cents / 100;
			int cents = total_cents % 100;
			std::cout << dollars << " dollars " << cents << " cents\n\n";	
			break;
		}
		case 3:{
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
			break;
		}
		case 4:{
			int days;
			std::cout << "Enter days count >>> ";
			std::cin >> days;
			int weeks = days/7;
			days = days%7;
			std::cout << weeks << " weeks and " << days << " days\n";
			break;
		}
		case 5:{
			int distance;
			int time;
			std::cout << "Enter distance in meters >>> ";
			std::cin >> distance;
			std::cout << "Enter time in minutes >>> ";
			std::cin >> time;
			std::cout << "Speed = " << distance*60.0f/(time*1000.0f) << " KM/H\n";
			break;
		}
		case 6:{
			float distance;
			float consumption;
			float price1, price2, price3;
			std::cout << "Enter distance in km >>> ";
			std::cin >> distance;
			std::cout << "Enter fuel consumption for 100 km  >>> ";
			std::cin >> consumption;
			std::cout << "Enter fuel 1 price for 1l : ";
			std::cin >> price1;
			std::cout << "Enter fuel 2 price for 1l: ";
			std::cin >> price2;
			std::cout << "Enter fuel 3 price for 1l: ";
			std::cin >> price3;
			for(int i = 0; i < 50; i++) std::cout<<'/';
			float fuel_consumpted = (distance*consumption/100.0f);
			std::cout << "\n>Cost of trip with different types of fuel:\n";
			std::cout << "| FUEL TYPE | COST |\n";
			std::cout << "|    (1)    | " << fuel_consumpted*price1 << "  |\n"; 
			std::cout << "|    (2)    | " << fuel_consumpted*price2 << "  |\n"; 
			std::cout << "|    (3)    | " << fuel_consumpted*price3 << "  |\n"; 
			break;
		}
		case 7:{
			int elapsed_time_s, elapsed_s_copy;
			std::cout << "Enter total time in seconds: ";
			std::cin >> elapsed_time_s;
			elapsed_s_copy = elapsed_time_s;
			int elapsed_h = elapsed_time_s/3600;
			elapsed_time_s = elapsed_time_s%3600;
			int elapsed_m = elapsed_time_s/60;
			int elapsed_s = elapsed_time_s%60;
			std::cout << "Current: " << elapsed_h << "h " << elapsed_m << "m " << elapsed_s << "s\n"; 
			
			int remaining_s = 24*3600 - elapsed_s_copy;
			int remaining_h = remaining_s/3600;
			remaining_s = remaining_s % 3600;
			int remaining_m = remaining_s/60;
			remaining_s = remaining_s%60;
			std::cout << "Remaining: " << remaining_h << "h " << remaining_m << "m " << remaining_s << "s\n"; 
			break;
		}
		case 8:{
			int elapsed_time_s;
			std::cout << "Enter total time in seconds: ";
			std::cin >> elapsed_time_s;
			
			int remaining_time_s = 8*3600 - elapsed_time_s;
			if(remaining_time_s > 0){
				int remaining_time_h = remaining_time_s / 3600; 
				std::cout << "Remaining time: " << remaining_time_h << " hours\n";
			}else{
				std::cout << "Bro, go home\n"; 
			}

			break;
		}
		default:{
			std::cout << "Task is not found!\n\n";
		}
	}
}
