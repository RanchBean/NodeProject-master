/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: ethr5627
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;

}
template <class Type>
CTECArray<Type>::~CTECArray()
{

}
template <class Type>
Type* CTECArray<Type>::get(int position)
{
	//We need to do boudn checking so dont crash program
	if(position >= size || position < 0)
	{
		//OUTOFBOUNDS do something about it
		cerr << "Position value is out of bounds :(" << endl;
		return nullptr;
	}
	else
	{
		//am in  bound
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
	}
}
template <class Type>
int CTECArray<Type>::getSize()
{
	return this->size = size;
}
template <class Type>
void CTECArray<Type>:: set(int position, Type value)
{
	if(position >= size || position < 0)
		{
			//OUTOFBOUNDS do something about it
			cerr << "Position value is out of bounds :(" << endl;

		}
		else
		{
			ArrayNode<Type> * current = head;
			for(int spot = 0; spot < position; spot++)
			{
				if(spot !=position)
				{
					current = current->getNext();
				}
				else
				{
					current = setValue(value);
				}
			}
		}
}

