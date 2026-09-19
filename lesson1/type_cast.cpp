#include <iostream>

using namespace std;

int main(){
	int age = 0;
	cin >> age;
	
	
	int num = (int)'5'; //Явне перетворення
	int num2 = int('5'); //?
	cout << (char)153 << '\n';
	
	int num3 = 3.45; //Неявне звужувальне перетворення
	cout << num3 << '\n';
	
	cout << 19 + 65.4 - true * '7' << "\n";
	
	cout << 5 / 2 << '\n'; // -> 2
	cout << 5 / 2.0 << '\n'; // -> 2.5
}
