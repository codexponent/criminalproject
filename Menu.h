#ifndef MENU_H
#define MENU_H
#include "NewFile.h"

class Menu
{
	private:
		char choice;   /*!< First Choice to be Taken */
		char choice1;	/*!< Second Choice to be Taken */
		int choice2;	/*!< Third Choice to be Taken */
		int choice3;	/*!< Fourth Choice to be Taken */
		int searchId;	/*!< Search by Id */
		char searchName[20];	/*!< Search by Name */
		NewFile nf;	/*!< Adds a New File */
	public:
		Menu();
		~Menu();
		void showMenu();
		void setMenu();
};

#endif

