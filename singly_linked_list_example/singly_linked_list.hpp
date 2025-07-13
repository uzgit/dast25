#ifndef SINGLY_LINKED_LIST_HPP
#define SINGLY_LINKED_LIST_HPP

#include <iostream>

class SinglyLinkedList {
private:
	struct Node {
		int datum;
		Node* next;
	};

	Node* front_node;

public:
	SinglyLinkedList();
	SinglyLinkedList(const SinglyLinkedList&);
	~SinglyLinkedList();
	bool empty() const;
	int& front();
	void push_front(int);
	void push_back(int);
	void pop_front();
	void print(std::ostream&) const;

	void push_all(const SinglyLinkedList&);
	void pop_all();

	SinglyLinkedList& operator= (const SinglyLinkedList);
	
	friend std::ostream& operator<< (std::ostream&, const SinglyLinkedList&);
};

#endif // SINGLY_LINKED_LIST_HPP
