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
	ones = 0; zeroes = 0;
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
int GetLowestSetBitIndex(uint8_t num){
	for(int i = 0; i < 8; i++){
		uint8_t mask = 1 << i;
		if((bool)(num & mask)) return i;
	}
	return -1;
}
void ClearLowestSetBit(uint8_t& num){
	int n = GetLowestSetBitIndex(num);
	if(n == -1) return;
	uint8_t mask = 1 << n;
	num = num & ~mask;
}
int main(){
	std::cout << "Enter target task (1-9) >> ";
	int choice;
	std::cin >> choice;
	switch(choice){
		case 1:{
			std::cout << "Enter number (0-255) >> ";
			int num;
			std::cin >> num;
			PrintByteBinary(num);
			break;
		}
		case 2:{
			std::cout << "Enter number (0-255) >> ";
			int num;
			std::cin >> num;
			std::cout << num << " is " << (IsEven(num) ? "even" : "odd");
			break;
		}
		case 3:{
			std::cout << "Done in the classwork.";
			break;
		}
		case 4:{
			std::cout << "Done in the classwork.";
			break;
		}
		case 5:{
			std::cout << "Done in the classwork.";
			break;
		}
		case 6:{
			std::cout << "Enter number (0-255) >> ";
			int num;
			std::cin >> num;
			int ones, zeroes;
			GetOnesAndZeroesCount(ones, zeroes, num);
			PrintByteBinary(num);
			std::cout << " contains " << ones << " ones; " << zeroes << " zeroes";
			break;
		}
		case 7:{
			std::cout << "Enter number (0-255) >> ";
			int num;
			std::cin >> num;
			std::cout << num << (IsPowerOf2(num) ? " is" : " is not") << " a power of 2";
			break;
		}
		case 8:{
			std::cout << "Enter number (0-255) >> ";
			int num;
			std::cin >> num;
			int n = GetLowestSetBitIndex(num);
			if(n != -1){
				std::cout << "Lowest set bit index of ";
				PrintByteBinary(num);
				std::cout << " is " << n;
			}else{
				std::cout << "There are no set bits in ";
				PrintByteBinary(num);
			}
			break;
		}
		case 9:{
			std::cout << "Enter number (0-255) >> ";
			int num;
			std::cin >> num;
			uint8_t byte = num;
			std::cout << "original: ";
			PrintByteBinary(byte);
			std::cout << "\nafter clearing lowest set bit: ";
			ClearLowestSetBit(byte);
			PrintByteBinary(byte);
			break;
		}
	}
}
