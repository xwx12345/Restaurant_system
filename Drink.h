#pragma once
#include "AbsDrink.h"
#include<iomanip>
class Coke :public AbsDrink {
public:
	Coke():AbsDrink(){}
	Coke(int n,int v, string o) :AbsDrink(n, v,o){}
	virtual void showName() {//抽象工厂
		cout << setw(10) << "可乐";
	}
};
class Orangejuice :public AbsDrink {
public:
	Orangejuice() :AbsDrink() {}
	Orangejuice(int n, int v, string o) :AbsDrink(n,v,o){}
	virtual void showName() {
		cout << setw(10) << "橙汁";
	}
};
class ZerosugarCoke :public AbsDrink {
public:
	ZerosugarCoke():AbsDrink(){}
	ZerosugarCoke(int n, int v, string o) :AbsDrink(n, v, o) {}
	virtual void showName() {
		cout << setw(10) << "零糖可乐";
	}
};
class Sprite :public AbsDrink {
public:
	Sprite() :AbsDrink() {}
	Sprite(int n, int v, string o) :AbsDrink(n, v, o) {}
	virtual void showName() {
		cout << setw(10) << "雪碧";
	}
};