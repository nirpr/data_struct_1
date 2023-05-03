#include "Stack.h"

stack::stack()
{
	//c'tor - define top as null
	top = nullptr;
}

stack::~stack()
{
	// d'tor - empty the stack
	makeEmpty();
}

void stack::makeEmpty()
{
	// delete all allocations
	node* curr = top, * next;
	while (curr != nullptr)
	{
		next = curr->getNext();
		delete curr;
		curr = next;
	}
}

bool stack::isEmpty()
{
	return top == nullptr;
}

void stack::push(itemType item)
{
	// create new node and define as top
	top = new node(item, top);
}

itemType stack::pop()
{
	// returns the top node's data from the stack 
	node* temp = top;
	itemType item = top->getData();
	top = top->getNext();
	delete temp;
	return item;
}