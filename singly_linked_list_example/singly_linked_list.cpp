#include "singly_linked_list.hpp"

SinglyLinkedList::SinglyLinkedList() : front_node(nullptr)
{
	// just need to set the front to null
}

SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList& other) : SinglyLinkedList()
{
	this->push_all(other);
}
	
SinglyLinkedList& SinglyLinkedList::operator= (const SinglyLinkedList other)
{
	this->pop_all();
	this->push_all( other );

	return *this;
}

SinglyLinkedList::~SinglyLinkedList()
{
	while( ! this->empty() )
	{
		this->pop_front();
	}
}

bool SinglyLinkedList::empty() const
{
	return this->front_node == nullptr;
}

int& SinglyLinkedList::front()
{
	return this->front_node->datum;
}

void SinglyLinkedList::push_front(int datum)
{
	if( this->empty() )
	{
		this->front_node = new SinglyLinkedList::Node{ datum, nullptr };
	}
	else
	{
		SinglyLinkedList::Node* temp = this->front_node;
		this->front_node = new SinglyLinkedList::Node{ datum, temp };
	}
}

void SinglyLinkedList::push_back(int datum)
{
	if( this->empty() )
	{
		this->push_front(datum);
	}
	else
	{
		SinglyLinkedList::Node* node = this->front_node;
		while( node->next != nullptr )
		{
			node = node->next;
		}

		node->next = new SinglyLinkedList::Node{ datum, nullptr };
	}
}

void SinglyLinkedList::pop_front()
{
	if( ! this->empty() )
	{
		SinglyLinkedList::Node* temp = this->front_node;
		this->front_node = this->front_node->next;

		delete temp;
		temp = nullptr;
	}
}

void SinglyLinkedList::push_all( const SinglyLinkedList& other )
{
	SinglyLinkedList::Node* node = other.front_node;
	while( node != nullptr )
	{
		this->push_back( node->datum );
		node = node->next;
	}
}

void SinglyLinkedList::pop_all()
{
	while( ! this->empty() )
	{
		this->pop_front();
	}
}

void SinglyLinkedList::print(std::ostream &os) const
{
	SinglyLinkedList::Node* node = this->front_node;
	while( node != nullptr )
	{
		os << node->datum;
		if( node->next != nullptr )
		{
			os << " ";
		}
		node = node->next;
	}
}

std::ostream& operator<< ( std::ostream& os, const SinglyLinkedList& list )
{
	list.print(os);
	return os;
}
