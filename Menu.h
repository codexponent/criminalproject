#ifndef MENU_H
#define MENU_H
#include "NewFile.h"

class Menu
{
	private:
		char choice;
		char choice1;
		int choice2;
		int choice3;
		int searchId;
		char searchName[20];
		NewFile nf;
	public:
		Menu();
		~Menu();
		void showMenu();
		void setMenu();
};

#endif

