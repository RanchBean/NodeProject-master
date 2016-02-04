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
	this->head = nullptr;

	//defensive code
	if(size <=0)
	{
		cerr << "DENIED" << endl;
		return;
	}
for(int index = 0; index<size; index++)
{
	if(head !=nullptr)
	{
		//regular array nodes are being made.
		ArrayNode<Type> nextNode;
		nextNode.setNext(head);
		this->head = &nextNode;
	}
	else
	{
		//first array node needs to be made
		ArrayNode<Type> firstNode;
		this->head = &firstNode;
	}

}

}
template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext()!= nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);

			delete deleteMe;
			deleteMe = head;
		}
		else
		{
			delete deleteMe;
			deleteMe delete;
		}

	}
	delete head;
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

