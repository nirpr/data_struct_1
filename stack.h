#ifndef __STACK_H
#define __STACK_H
#include "itemType.h"
#include "List.h"


class stack
{
	node* top;
public:
	stack();
	~stack();
	bool isEmpty();
	void makeEmpty();
	void push(itemType item);
	itemType pop();
};

#endif !__STACK_H


