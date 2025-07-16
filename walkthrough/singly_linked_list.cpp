#include "singly_linked_list.hpp"

// constructor
SinglyLinkedList::SinglyLinkedList()
{
	// just ensure head and tail are null
	this->head = nullptr;
}

// tells whether the list is empty or not
bool SinglyLinkedList::empty() const
{
	return (nullptr == this->head);
}

// adds new data to the front of the list
void SinglyLinkedList::push_front(int datum)
{
	// populate this node
	Node* node = new Node;
	node->datum = datum;
	node->next = this->head; // this works even if head is nullptr

	// insert the new node into the list
	this->head = node;
}

// gets a reference to the *data* value of the front node
int& SinglyLinkedList::front()
{
	return this->head->datum;
}


// removes and deallocates the front node of the list
void SinglyLinkedList::pop_front()
{
	// check if we have anything to remove at all
	if( ! this->empty() )
	{
		// remember where the current head is
		Node* temp = this->head;

		// move the head one node back
		this->head = this->head->next;

		// deallocate the previous head
		delete temp;
		temp = nullptr;
	}
}

// check if the list contains a particular item
bool SinglyLinkedList::contains(const int datum) const
{
	// keep track of whether we have found it or not
	//   default to no
	bool result = false;

	// iterate the list from the beginning
	Node* node = this->head;

	// while we have not found it and the node pointer is still valid
	while( ! result && nullptr != node )
	{
		// if we find it then mark the result flag
		//   breaks the loop on the next iteration
		if( node->datum == datum )
		{
			result = true;
		}

		// move to the next node
		node = node->next;
	}

	return result;
}

// pushes all elements from another list onto this one
void SinglyLinkedList::push_all(const SinglyLinkedList& other)
{
	// start iterating from the beginning of the other list
	Node* node = other.head;

	// while the node pointer is still valid
	while( nullptr != node )
	{
		// copy data from the node
		int datum = node->datum;

		// push that data to this list
		this->push_front(datum);

		// move to the next node
		node = node->next;
	}
}

// removes all of the data from this list
void SinglyLinkedList::pop_all()
{
	// while this list has items to pop
	while( ! this->empty() )
	{
		// keep poppin!
		this->pop_front();
	}
}

// prints the list to a stream
void SinglyLinkedList::print(std::ostream& output_stream) const
{
	// mark the border (even if empty)
	output_stream << "[ ";
	if( ! this->empty() )
	{
		// start iterating from the beginning of the list
		Node* node = this->head;

		// while the node pointer is still valid
		while( nullptr != node )
		{
			// output the data on the current node
			output_stream << node->datum;
			
			// if there is another one coming, output a comma
			if( nullptr != node->next )
			{
				output_stream << ", ";
			}
			else // otherwise, just output a space
			{
				output_stream << " ";
			}

			// move to the next node
			node = node -> next;
		}

	}
	// close the border (even if empty)
	output_stream << "]";
}

// prints the list to a stream in a convenient way
std::ostream& operator<< (std::ostream& output_stream, const SinglyLinkedList& list)
{
	// just call the print function
	list.print( output_stream );

	return output_stream;
}

bool SinglyLinkedList::operator== (const SinglyLinkedList& other) const
{
	bool result = true;

	// if this list is not the same as the other then we have to compare
	if( this != & other )
	{
		Node* this_node  = this->head;
		Node* other_node = other.head;

		// while we haven't found unequal values and the pointers are still
		//   both valid
		while( result && nullptr != this_node && nullptr != other_node )
		{
			// if the values are not equal at any point then the
			//   lists are not equal -- break on next iteration
			if( this_node->datum != other_node->datum )
			{
				result = false;
			}

			// iterate both lists simultaneously
			this_node  =  this_node->next;
			other_node = other_node->next;
		}

		// if both pointers are null and result is still true then the check
		//   made it to the end of both lists, so they are equal
		result = result && nullptr == this_node && nullptr == other_node;
	}
	return result;
}

// check if two lists are not equal by first checking if they are equal
//   and then negating the result
bool SinglyLinkedList::operator!= (const SinglyLinkedList& other) const
{
	return ! ( *this == other );
}

// copy constructor
SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList& other) : head(nullptr)
{
	this->push_all( other );
}

// sets this list equal to another one (in a sane way)
SinglyLinkedList& SinglyLinkedList::operator= (const SinglyLinkedList& other)
{
	this->pop_all();
	this->push_all( other );

	return *this;
}

// destructor
SinglyLinkedList::~SinglyLinkedList()
{
	this->pop_all();
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
	return Iterator(this->head);
}

// the end of a linked list is always a nullptr
SinglyLinkedList::Iterator SinglyLinkedList::end()
{
	return Iterator(nullptr);
}

// get the data value of a node via an iterator
int& SinglyLinkedList::Iterator::operator*() const
{
	return this->node->datum;
}

// move an iterator to the next node
//   this is the prefix operator, i.e., ++iterator
SinglyLinkedList::Iterator& SinglyLinkedList::Iterator::operator++ ()
{
	if( nullptr != this->node )
	{
		this->node = this->node->next;
	}
	return *this;
}

// move an iterator to the next node
//   this is the postfix operator, i.e., iterator++
SinglyLinkedList::Iterator& SinglyLinkedList::Iterator::operator++ (int)
{
	if( nullptr != this->node )
	{
		this->node = this->node->next;
	}
	return *this;
}

// check if one iterator is at the same position as another
//   just compare them on the basis of the address of the nodes the represent
bool SinglyLinkedList::Iterator::operator== (SinglyLinkedList::Iterator other) const
{
	bool result = false;

	if( this->node == other.node )
	{
		result = true;
	}

	return result;
}

// check if one iterator is NOT at the same position as another
//   calls and negates operator==
bool SinglyLinkedList::Iterator::operator!= (SinglyLinkedList::Iterator other) const
{
	return ! (* this == other );
}
