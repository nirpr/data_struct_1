#ifndef __NODE_H
#define __NODE_H
#include <iostream>
#include <vector>
#include "itemType.h"

class node {
	itemType data;
	node* next;
public:
	node(itemType item, node* ptr = nullptr): data(item), next(ptr) {}
	~node() {}
	node* getNext() const { return next; }
	itemType& getData() { return data; }
	void setNext(node* next);
	void insertAfter(node* newNode);
	node* deleteAfter();
};
#endif