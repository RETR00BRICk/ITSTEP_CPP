#include <iostream>
#include "point.h"

int main(){
	point::Point p1, p2;
	point::input(p1);
	point::input(p2);
	
	point::print(p1);
	std::cout << '\n';
	point::print(p2);
	std::cout << '\n';
	
	std::cout << point::distance(p1, p2) << '\n';
	point::Point midp = point::midpoint(p1, p2);
	
	point::print(midp);
}
