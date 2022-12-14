#pragma once
#include<string>
#include<iostream>
using namespace std;
class AbsBurger {
protected:
	int price;
	string o;
public:
	AbsBurger() { price = 0; o = ""; }
	AbsBurger(int p, string i) { price = p; o = i; }
	string getPic() { return o; };
	int getPrice() { return price; };
	virtual void showName()=0;
};
