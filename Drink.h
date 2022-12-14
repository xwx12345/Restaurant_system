#pragma once
#include "AbsDrink.h"
#include<iomanip>
class Coke :public AbsDrink {
public:
	Coke():AbsDrink(){}
	Coke(int n,int v, string o) :AbsDrink(n, v,o){}
	virtual void showName() {//���󹤳�
		cout << setw(10) << "����";
	}
};
class Orangejuice :public AbsDrink {
public:
	Orangejuice() :AbsDrink() {}
	Orangejuice(int n, int v, string o) :AbsDrink(n,v,o){}
	virtual void showName() {
		cout << setw(10) << "��֭";
	}
};
class ZerosugarCoke :public AbsDrink {
public:
	ZerosugarCoke():AbsDrink(){}
	ZerosugarCoke(int n, int v, string o) :AbsDrink(n, v, o) {}
	virtual void showName() {
		cout << setw(10) << "���ǿ���";
	}
};
class Sprite :public AbsDrink {
public:
	Sprite() :AbsDrink() {}
	Sprite(int n, int v, string o) :AbsDrink(n, v, o) {}
	virtual void showName() {
		cout << setw(10) << "ѩ��";
	}
};