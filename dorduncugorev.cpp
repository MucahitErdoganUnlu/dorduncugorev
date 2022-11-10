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
//	ank.domain = &tr;
	tr.capital = &ank;
	
	struct Province ist;
	ist.name = "Istanbul";
	ist.domain = &tr;
	
	std::cout << (ist.domain)->name;
	
/*	
	int b = 5;
	int* a = &b;
	b= 7;
	std::cout << "a: " << a << " b: " << &b << std::endl;
*/	
}
