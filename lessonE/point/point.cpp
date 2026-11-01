#include <iostream>
#include "point.h"
#include <cmath>
namespace point{
	void input(Point& p){
		std::cout << "Enter x coord: ";
		std::cin >> p.x;
		std::cout << "Enter y coord: ";
		std::cin >> p.y;
	}

	void print(const Point& p){
		std::cout << "( " << p.x << ", " << p.y << " )";
	}

	double distance(const Point& p1, const Point& p2){
		double result = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.x, 2));
		return result;
	}

	Point midpoint(const Point& p1, const Point& p2){
		Point result;
		result.x = (p1.x + p2.x) / 2;
		result.y = (p1.y + p2.y) / 2;
		return result;
	}

}
