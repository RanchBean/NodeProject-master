/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: ethr5627
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_
#include "ArrayNode.h"

template <class Type>
class CTECArray
{
private:
	int size:
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
public:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize;
	Type get(int position);
	void set(int position, const Type& value);

};



#endif /* MODEL_CTECLIST_H_ */
