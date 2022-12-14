#pragma once
#include "AbsFries.h"
#include<iomanip>
class FrenchFries :public AbsFries {
public:
	FrenchFries():AbsFries(){}
	FrenchFries(int p,int s,string o):AbsFries(p,s,o){}
	virtual void showName() {
		cout << setw(10) << "ÊíÌõ";
	}
};
class SweetpotatoFries :public AbsFries {
public:
	SweetpotatoFries() :AbsFries() {}
	SweetpotatoFries(int p, int s, string o) :AbsFries(p, s, o) {}
	virtual void showName() {
		cout << setw(10) << "ºìÊíÌõ";
	}
};