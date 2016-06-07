/*
 * Menu.cpp
 *
 *  Created on: june 6, 2016
 *      Author: lisbeymella
 */

#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{

}

void Menu::clearScreen()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

void Menu::pause()
{
	#ifdef _WIN32
	system("pause");
	#else
	system("read -n1 -r -p \"Press any key to continue...\" key");
	#endif
}


bool Menu::validate(int option)
{
	if(option >= 1 && option <= 4)
	{
		return true;
	}else
	{
		cout << "Please pick an option between 1 and 4"<< endl;
		pause();
		return false;
	}
}

void Menu::routeAction(int option)
{
	switch(option)
	{
	case 1:
		listItems();
		break;
	case 2:
		addItems();
		break;
	case 3:
		removeItems();
		break;
	case 4:
		cout << "Thanks for using this software!" << endl;
	}
	pause();
}

void Menu::listItems()
{
	//TODO: Implement this

	Element* i = list -> getFirst();
	int position = 1; // to identify the position of the element
	while (i != NULL)
	{

		cout << position++ << " - "<< i -> getName() << endl;
		i = i -> getNext();
	}
}

void Menu::addItems()
{
	//TODO: Implement this
	string name;

	cout << " element Name type : ";
	cin >> name;

	Element* element = new Element(name);

	list -> add(element);
		cout << " element added successfully "
}

void Menu::removeItems()
{
	//TODO: Implement this

	int position;
	int counter = 1;

	cout << "the position  the element to remove: ";
	cin >> position;
	list -> remove(position);
	Element* beforeTheRemoved = list -> getFirst();


	while (counter < position ) remove and point
	{
		counter++;
		beforeTheRemoved = beforeTheRemoved ->getNext();
	}

	Element* afterTheRemoved = beforeTheRemoved;
	afterTheRemoved = afterTheRemoved -> getNext();
		afterTheRemoved = afterTheRemoved -> getNext();

	beforeTheRemoved -> setNext(afterTheRemoved);

}

void Menu::show()
{
	int option;
	do
	{
		clearScreen();
		cout << "ITLA Shopping List" << endl;
		cout << "1- List items" << endl;
		cout << "2- Add Item" << endl;
		cout << "3- Remove Item" << endl;
		cout << "4- Exit" << endl;
		cout << "Select an option => ";
		cin >> option;
		if(validate(option))
		{
			routeAction(option);
		}
	}while(option !=4);
}
