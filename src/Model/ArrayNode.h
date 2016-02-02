/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: ethr5627
 */

#ifndef MODEL_ARRAYNODE_H_
#define MODEL_ARRAYNODE_H_

#include "Node.h"
template <class Type>

class ArrayNode: public Node<Type>
{
private :
	ArrayNode * next;
public:
	ArrayNode();
	ArrayNode(Type value);
	ArrayNode(Type value, ArrayNode * next);
	ArrayNode * getNext();
	void setNext(ArrayNode * next);
	virtual ~ArrayNode();
};

#endif /* MODEL_ARRAYNODE_H_ */
