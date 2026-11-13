#include <iostream>
#include <cstdint>

void set(uint8_t* word, uint8_t n){
	*word = *word | (1u << n);  //u? единый стиль?
}

void clear(uint8_t* word, uint8_t n){
	*word = *word & ~(1u << n);
}

void toggle(uint8_t* word, uint8_t n){
	*word = *word ^ (1u << n);
}

bool read(uint8_t* word, uint8_t n){
	return(*word >> n) & 1u;
}

int main(){
	uint8_t word = 2;
	std::cout << read(&word, 1) << '\n';
	std::cout << read(&word, 2) << '\n';
	toggle(&word, 0);
	std::cout << read(&word, 0) << '\n';
}
