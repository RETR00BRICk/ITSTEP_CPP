#pragma once
namespace point{
	struct Point{
		double x;
		double y;
	};

	void input(Point& point);
	void print(const Point& point);

	double distance(const Point& p1, const Point& p2);
	Point midpoint(const Point& p1, const Point& p2);
}

