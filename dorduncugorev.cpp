#include <iostream>
#include <string>

struct Province;

struct Country {
	std::string name;
	struct Province *capital;
};

struct Province {
	std::string name;
	struct Country* domain;
};


int main(){
	
	struct Country tr;
	tr.name = "Turkiye";
	
	struct Province ank;
	ank.name = "Ankara";

	tr.capital = &ank;
//	ank.domain = &tr;  gerekli deðil

	
	struct Province ist;
	ist.name = "Istanbul";
	ist.domain = &tr;
	
	std::cout << (ist.domain)->name;
	
}
