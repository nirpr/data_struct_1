#include "List.h"


List::~List()
{
	node* curr = head, *next;
	while (curr != nullptr)
	{
		next = curr->getNext();
		delete curr;
		curr = next;
	}
}

bool List::isEmpty() const
{
	return head == nullptr;
}

void List::push_front(const itemType& data)
{
	node* newNode = new node(data);
	if (head == nullptr) {
		head = newNode;
	}
	else {
		newNode->setNext(head);
		head = newNode;
	}
}

node* List::pop_front() {
	if (head == nullptr) {
		return nullptr;
	}
	node* temp = head;
	head = head->getNext();
	temp->setNext(nullptr);
	return temp;
}
