#pragma once
#include "OurFactory.h"
#include<iomanip>
class Menu {
public:
	void setMenu();
	void showMenu();
protected:
	AbsFactory* factory = NULL;
	AbsBurger* burger[3] = { NULL };
	AbsDrink* drink[4] = { NULL };
	AbsFries* fries[2] = { NULL };
};
void Menu::setMenu() {
	factory = OurFactory::getInstance();//µ•¿˝+≥ÈœÛπ§≥ß
	burger[0] = factory->createBurger(1, 30, "≈£»‚∫∫±§ÕºœÒ");
	burger[1] = factory->createBurger(2, 20, "º¶»‚∫∫±§ÕºœÒ");
	burger[2] = factory->createBurger(3, 25, "÷Ì»‚∫∫±§ÕºœÒ");
	drink[0] = factory->createDrink(1, 10, 350, "ø…¿÷ÕºœÒ");
	drink[1] = factory->createDrink(2, 10, 350, "≥»÷≠ÕºœÒ");
	drink[2] = factory->createDrink(3, 15, 350, "¡„Ã«ø…¿÷ÕºœÒ");
	drink[3] = factory->createDrink(4, 10, 350, "—©±ÃÕºœÒ");
	fries[0] = factory->createFries(1, 10, 300, " ÌÃıÕºœÒ");
	fries[1] = factory->createFries(2, 12, 300, "∫Ï ÌÃıÕºœÒ");
}
void Menu::showMenu() {
	cout << "==================================================" << endl;
	cout << "**                    Burger                    **" << endl;
	cout << "--------------------------------------------------" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "**  ";
		burger[i]->showName();
		cout << setw(36) << setiosflags(ios::right) << burger[i]->getPrice() << "‘™ **" << endl;
	}
	cout << "--------------------------------------------------" << endl;
	cout << "**                    Drink                     **" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "**  ";
		drink[i]->showName();
		cout << setw(36) << setiosflags(ios::right)<<drink[i]->getVolume()<<"ml    " << drink[i]->getPrice() << "‘™ **" << endl;
	}
	cout << "--------------------------------------------------" << endl;
	cout << "**                    Fries                     **" << endl;
	for (int i = 0; i < 2; i++) {
		cout << "**  ";
		fries[i]->showName();
		cout << setw(36) << setiosflags(ios::right) << fries[i]->getSize() << "g     " << fries[i]->getPrice() << "‘™ **" << endl;
	}
	cout << "==================================================" << endl;
}
