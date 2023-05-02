#ifndef __LIST_H
#define __LIST_H

#include <iostream>
#include "node.h"

class List {
private:
	node* head;
public:
	List() : head(nullptr) {}
	~List();
	void push_front(const itemType& data);
	node* pop_front();
	bool isEmpty() const;
};



#endif __LIST_H
