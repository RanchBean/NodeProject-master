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


