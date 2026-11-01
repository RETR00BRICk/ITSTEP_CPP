#include <iostream>
#include <cmath>
template <typename T>
void ExpandArray(T*& arr, int& size, const T& val){
	T* new_ptr = new T[size + 1]; 
	for(int i = 0; i < size; i++){
		new_ptr[i] = arr[i];
	}
	new_ptr[size] = val;
	size++;
	delete[] arr;
	arr = new_ptr;
}

struct Point{
	float x;
	float y;
};
struct Fraction{
	int nominator;
	int denominator; 
};
Fraction SimplifyFraction(Fraction fr){
	int nominator = std::abs(fr.nominator);
	int denominator = std::abs(fr.denominator);
	int min;
	if(nominator == 0 && denominator == 0) return fr;
	else if(nominator == 0) min = denominator;
	else if(denominator == 0) min = nominator;
	else min = nominator < denominator ? nominator : denominator;
	int gcd = 1;
	for(int i = 1; i <= min; i++){
		if(nominator % i == 0 and denominator % i == 0){
			if(i > gcd) gcd = i;
		}
	}
	fr.nominator /= gcd;
	fr.denominator /= gcd;
	if(fr.nominator < 0 && fr.denominator < 0){
		fr.nominator *= -1;
		fr.denominator *= -1;
	}
	return fr;
}
Fraction AddFractions(Fraction fr0, Fraction fr1){
	int common_d = fr0.denominator * fr1.denominator;
	fr0.nominator *= fr1.denominator;
	fr1.nominator *= fr0.denominator;
	Fraction result = {fr0.nominator + fr1.nominator, common_d};
	return SimplifyFraction(result);
}
Fraction SubstractFractions(Fraction fr0, Fraction fr1){
	int common_d = fr0.denominator * fr1.denominator;
	fr0.nominator *= fr1.denominator;
	fr1.nominator *= fr0.denominator;
	Fraction result = {fr0.nominator - fr1.nominator, common_d};
	return SimplifyFraction(result);
}
Fraction MultiplyFractions(Fraction fr0, Fraction fr1){
	Fraction result = {fr0.nominator*fr1.nominator, fr0.denominator*fr1.denominator};
	return SimplifyFraction(result);
}
Fraction DivideFractions(Fraction fr0, Fraction fr1){
	Fraction result = {fr0.nominator*fr1.denominator, fr0.denominator*fr1.nominator};
	return SimplifyFraction(result);
}
Fraction FromDecimalFraction(float decimal){
	Fraction result = {(int)(decimal*100.0f), 100};
	return SimplifyFraction(result);
}
void PrintFraction(Fraction fr){
	std::cout << fr.nominator << '/' << fr.denominator;
}
float GetDistanceBetweenPoints(Point p0, Point p1){
	float dx = p1.x - p0.x;
	float dy = p1.y - p0.y;
	return std::sqrt(dx*dx + dy*dy);
}
int main(){
	int choice;
	std::cout << "Choose a task (1-6) >>> ";
	std::cin >> choice;
	switch(choice){
		case 1:{
			Point p0 = {1.0f, 1.0f};
			Point p1 = {0.0f, 2.0f};
			std::cout << "First point: X=" << p0.x << " Y=" << p0.y << '\n';
			std::cout << "Second point: X=" << p1.x << " Y=" << p1.y << '\n';
			std::cout << "Distance = " << GetDistanceBetweenPoints(p0, p1);
			break;
		}
		case 2:{
			Fraction fr0;
			Fraction fr1;
			std::cout << "Enter first fraction nominator >>> ";
			std::cin >> fr0.nominator;
			std::cout << "Enter first fraction denominator >>> ";
			std::cin >> fr0.denominator;
			std::cout << "Enter second fraction nominator >>> ";
			std::cin >> fr1.nominator;
			std::cout << "Enter second fraction denominator >>> ";
			std::cin >> fr1.denominator;
			std::cout << "Add: ";
			PrintFraction(AddFractions(fr0, fr1));
			std::cout << "\nSubtract: ";
			PrintFraction(SubstractFractions(fr0, fr1));
			std::cout << "\nMultiply: ";
			PrintFraction(MultiplyFractions(fr0, fr1));
			std::cout << "\nDivide: ";
			PrintFraction(DivideFractions(fr0, fr1));
			
			std::cout << "\n------\nNow enter decimal fraction (e. g. 1.39) >>> ";
			float decimal;
			std::cin >> decimal;
			std::cout << "Converted into simple fraction: ";
			PrintFraction(FromDecimalFraction(decimal));
			break;
		}
		case 3:{
			
		}
	}
}
