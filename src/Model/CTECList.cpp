/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: ethr5627
 */

#include "CTECList.h"

template<class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this_>end = nullptr;
}
template <class Type>
CTECList<Type>::~CTECList()
{

}
template<class Type>
Type CTECList<Type>:: removeFromFront()
{
//findNextspotremove head move head ti next spot.
	assert(this->size > 0);

	Type thingToRemove;
	ArrayNode * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	thingToRemove = this->head->getValue();
	delete head;
	this->head = newHead;
	return thingToRemove;
}
template <class Type>
Type CTECList<Type>:: removeFromEnd()
{

}
template <class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	assert(this->size > 0);
	assert(index >= 0 && index < size);
	Type thingToRemove;
	Arraynode<Type> * previous,deleteMe,newNext;

	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();p
	}
	else
	{
		for(int spot = 0; spot< inedx+1; spot++)
		{

		}
	}
}


