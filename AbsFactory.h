#pragma once
#include "AbsBurger.h"
#include "AbsDrink.h"
#include "AbsFries.h"
class AbsFactory {
public:
	virtual AbsBurger* createBurger(int type,int price,string pic) = 0;
	virtual AbsDrink* createDrink(int type,int price,int volume,string pic) = 0;
	virtual AbsFries* createFries(int type,int price,int size,string pic) = 0;
};
