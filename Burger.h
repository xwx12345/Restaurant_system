#pragma once
#include "AbsBurger.h"
class BeefBurger :public AbsBurger {
public:
	BeefBurger() :AbsBurger() {}
	BeefBurger(int price,string pic):AbsBurger(price,pic){}
	virtual void showName() {
		cout << "Å£Èâºº±¤";
	}
};
class ChickenBurger :public AbsBurger {
public:
	ChickenBurger() :AbsBurger() {}
	ChickenBurger(int price, string pic) :AbsBurger(price, pic) {}
	virtual void showName() {
		cout << "¼¦Èâºº±¤";
	}
};
class PorkBurger :public AbsBurger {
public:
	PorkBurger() :AbsBurger() {}
	PorkBurger(int price, string pic) :AbsBurger(price, pic) {}
	virtual void showName() {
		cout << "ÖíÈâºº±¤";
	}
};
