#pragma once
#include "AbsFactory.h"
#include "Burger.h"
#include "Drink.h"
#include "Fries.h"
class OurFactory :public AbsFactory {
public:
	static OurFactory* getInstance() {
		return ourfactory;
	}
	static void freeSpace() {
		if (ourfactory != NULL) {
			delete ourfactory;
		}
	}
	virtual AbsBurger* createBurger(int type,int price,string pic) {
		if (type == 1) {
			return new BeefBurger(price, pic);
		}
		else if (type == 2) {
			return new ChickenBurger(price, pic);
		}
		else if (type == 3) {
			return new PorkBurger(price, pic);
		}
		else {
			cout << "Burger type error!" << endl;
			return 0;
		}
	}
	virtual AbsDrink* createDrink(int type,int price,int volume,string pic) {
		if (type == 1) {
			return new Coke(price, volume, pic);
		}
		else if(type==2) {
			return new Orangejuice(price, volume, pic);
		}
		else if (type == 3) {
			return new ZerosugarCoke(price, volume, pic);
		}
		else if (type == 4) {
			return new Sprite(price, volume, pic);
		}
		else {
			cout << "Drink type error!" << endl;
			return 0;
		}
	}
	virtual AbsFries* createFries(int type,int price,int size,string pic) {
		if (type == 1) {
			return new FrenchFries(price, size, pic);
		}
		else if (type == 2) {
			return new SweetpotatoFries(price, size, pic);
		}
		else {
			cout << "Fries type error!" << endl;
			return 0;
		}
	}
private:
	OurFactory(){}
	static OurFactory* ourfactory;//µ¥ÀýÄ£Ê½
};
OurFactory* OurFactory::ourfactory = new OurFactory;