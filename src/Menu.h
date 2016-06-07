/*
 * Menu.h
 *
 *  Created on: june 6, 2016
 *      Author: lisbeymella
 */

#ifndef MENU_H_
#define MENU_H_
#include "List.h"

class Menu
{
	private:
		void clearScreen();
		void listItems();
		void addItems();
		void removeItems();
		bool validate(int option);
		void routeAction(int option);
		void pause();
	public:
		Menu();
		void show();
};

#endif /* MENU_H_ */
