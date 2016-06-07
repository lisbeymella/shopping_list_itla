/*
 * List.h
 *
 *  Created on: june 6, 2016
 *      Author: lisbeymella
 */

#ifndef LIST_H_
#define LIST_H_
#include "Element.h"
class List
{
	public:
		List();
		void add(Element* element);
		void remove(int index);
	private:
		Element* _first;
		Element* _last;
};

#endif /* LIST_H_ */
