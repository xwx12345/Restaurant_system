#pragma once
#include"OurFactory.h"
#include"Menu.h"
using namespace std;
#define COMBO_MAX  5
class Combo :public Menu{
public:
	void setCombo(int* cburger, int* cdrink, int* cfries, int p, string n) { comboBurger = cburger; comboDrink = cdrink; comboFries = cfries; price = p; name = n; }
	void showCombo();
private:
	int* comboBurger;
	int* comboDrink;
	int* comboFries;
	int price;
	string name;
};
void Combo::showCombo() {
	
}