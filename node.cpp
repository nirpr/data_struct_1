#include "node.h"

void node::insertAfter(node* newNode)
{
	newNode->next = next;
	next = newNode;
}

node* node::deleteAfter()
{
	node* toDelete = next;

	if (toDelete == nullptr)
		return nullptr;
	next = toDelete->next;
	return toDelete;
}

void node::setNext(node* next)
{
	this->next = next;
}
