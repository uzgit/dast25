#include "singly_linked_list.hpp"

// constructor
SinglyLinkedList::SinglyLinkedList()
{

}

// tells whether the list is empty or not
bool SinglyLinkedList::empty() const
{

}

// adds new data to the front of the list
void SinglyLinkedList::push_front(int datum)
{

}

// gets a reference to the *data* value of the front node
int& SinglyLinkedList::front()
{

}

// removes and deallocates the front node of the list
void SinglyLinkedList::pop_front()
{

}

// check if the list contains a particular item
bool SinglyLinkedList::contains(const int datum) const
{

}

// pushes all elements from another list onto this one
void SinglyLinkedList::push_all(const SinglyLinkedList& other)
{

}

// removes all of the data from this list
void SinglyLinkedList::pop_all()
{

}

// prints the list to a stream
void SinglyLinkedList::print(std::ostream& output_stream) const
{

}

// prints the list to a stream in a convenient way
std::ostream& operator<< (std::ostream& output_stream, const SinglyLinkedList& list)
{

}

bool SinglyLinkedList::operator== (const SinglyLinkedList& other) const
{

}

// check if two lists are not equal by first checking if they are equal
//   and then negating the result
bool SinglyLinkedList::operator!= (const SinglyLinkedList& other) const
{

}

// copy constructor
SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList& other) : head(nullptr)
{

}

// sets this list equal to another one (in a sane way)
SinglyLinkedList& SinglyLinkedList::operator= (const SinglyLinkedList& other)
{

}

// destructor
SinglyLinkedList::~SinglyLinkedList()
{

}

// constructor
SinglyLinkedList::Iterator::Iterator() : node(nullptr)
{

}

// constructor from a node pointer
SinglyLinkedList::Iterator::Iterator(Node* _node) : node(_node)
{

}

// the begninning of the linked list is the head
SinglyLinkedList::Iterator SinglyLinkedList::begin()
{

}

// the end of a linked list is always a nullptr
SinglyLinkedList::Iterator SinglyLinkedList::end()
{

}

// get the data value of a node via an iterator
int& SinglyLinkedList::Iterator::operator*() const
{

}

// move an iterator to the next node
//   this is the prefix operator, i.e., ++iterator
SinglyLinkedList::Iterator& SinglyLinkedList::Iterator::operator++ ()
{
	
}

// move an iterator to the next node
//   this is the postfix operator, i.e., iterator++
SinglyLinkedList::Iterator& SinglyLinkedList::Iterator::operator++ (int)
{

}

// check if one iterator is at the same position as another
//   just compare them on the basis of the address of the nodes the represent
bool SinglyLinkedList::Iterator::operator== (SinglyLinkedList::Iterator other) const
{

}

// check if one iterator is NOT at the same position as another
//   calls and negates operator==
bool SinglyLinkedList::Iterator::operator!= (SinglyLinkedList::Iterator other) const
{

}
