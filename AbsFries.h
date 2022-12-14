#pragma once
#include<iostream>
using namespace std;
class AbsFries{
protected:
	int price;
	int size;
	string o;
public:
	AbsFries() { price = 0; size = 0; o = ""; }
	AbsFries(int p, int s, string i) { price = p; size = s; o = i; }
	int getPrice() { return price; }
	int getSize() { return size; }
	string getPic() { return o; }
	virtual void showName() = 0;
};