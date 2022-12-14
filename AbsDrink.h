#pragma once
#include<string>
#include<iostream>
using namespace std;
class AbsDrink {
protected:
	int price;
	int volume;
	string o;
public:
	AbsDrink() { price = 0; o = ""; volume = 0; }
	AbsDrink(int p, int v, string i) { price = p; o = i; volume = v; }
	int getPrice() { return price; }
	string getPic() { return o; }
	int getVolume() { return volume; }
	virtual void showName() = 0;
};
