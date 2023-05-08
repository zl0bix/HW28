#include<iostream>
#include<string>
#include"Products.h"

void print_prod(const product& sel) {
	std::cout << sel.name << std::endl;
	std::cout << sel.number << std::endl;
	std::cout << sel.price << std::endl;
	std::cout << std::endl;
}

int full_price(const product& sel) {

	return (sel.number) * (sel.price);
}

void sell(const product& sel, int num){
	if (sel.number < num)
		std::cout << "Error!!!";
	else {
		std::cout << sel.name << std::endl;
		std::cout << sel.number - num << std::endl;
		std::cout << sel.price << std::endl;
		std::cout << std::endl;
	}
}


