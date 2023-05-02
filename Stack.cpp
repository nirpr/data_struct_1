#include "Stack.h"

stack::stack()
{
	top = nullptr;
}

stack::~stack()
{
	makeEmpty();
}

void stack::makeEmpty()
{
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
	top = new node(item);
}

itemType stack::pop()
{
	node* temp = top;
	itemType item = top->getData();
	top = top->getNext();
	delete temp;
	return item;
}