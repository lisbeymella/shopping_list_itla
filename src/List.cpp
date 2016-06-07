/*
 * List.cpp
 *
 *  Created on: june 6, 2016
 *      Author: lisbeymella
 */

#include "List.h"
#include <iostream>
#include <Element.h>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{

 _firstElement = NULL;
 _lastElement = NULL;

}

void List::add(Element* element)
{
	//TODO: Implement this method
	if (_firstElement == NULL){
        _firstElement = element;
        _lastElement = element;
    } else {
        _lastElement -> setNext(element);
        _lastElement = element;
    }

}

void List::remove(int index)
{
	//TODO: Implement this method
	Element* i = getFirstElement();

    Element* _element;
    cout<< i -> getCod();
    cout<< element -> getCod();

        if (element -> getCod() == _element -> getCod()){
            cout << "this component already exist";

    }
}
