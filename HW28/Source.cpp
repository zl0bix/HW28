#include<iostream>
#include<string>
#include"Products.h"


int main() {
	setlocale(LC_ALL, "rus");
	int n = 2;
	//HW28
	std::cout << "\n\n\t\tHW28.1\n\n";
	
	product sel1{
	"Phone",
	55,
	150
	};
	product sel2{
	"Phone",
	15,
	200
	};
	
	
	print_prod(sel1);
	std::cout << full_price(sel1) << std::endl;;
	std::cout << std::endl;
	sell(sel1, n);
}