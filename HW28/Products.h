#pragma once
#include<iostream>
#include<string>

struct product {
	std::string name = "";
	int number = 0;
	int price = 1;
};



void print_prod(const product& sel);
int full_price(const product& sel);
void sell(const product& sel, int num);