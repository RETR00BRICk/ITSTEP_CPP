#include <iostream>
#include <cstdint> //без него uint_8 у меня не компилируется

void PrintByteBinary(uint8_t num){
	for(int i = 7; i >= 0; i--){
		uint8_t mask = 1 << i;
		uint8_t result = num & mask; //по сути я использую тут свойства самого bool. Нет нужды сдвигать полученный бит в младший разряд, так как (bool)00100000 вернет все равно 1
		std::cout << (bool)result;
	}
}
bool IsEven(uint8_t num){
	return !(num & 1);
}
void GetOnesAndZeroesCount(int& ones, int& zeroes, uint8_t num){
	for(int i = 0; i < 8; i++){
		uint8_t mask = 1 << i;
		ones += (bool)(num & mask);
		zeroes += !(bool)(num & mask);
	}
}
bool IsPowerOf2(uint8_t num){
	int ones = 0;
	for(int i = 0; i < 8; i++){
		uint8_t mask = 1 << i;
		ones += (bool)(num & mask);
		if(ones > 1) return false; //степень двойки имеет только 1 единицу
	}
	return ones == 1;
}
int main(){
	//PrintByteBinary(-1);
	int zeroes = 0, ones = 0;
	GetOnesAndZeroesCount(ones, zeroes, 255);
	std::cout << zeroes << " " << ones << '\n';

	
}
