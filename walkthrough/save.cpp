// removes and deallocates the back node of the list
void SinglyLinkedList::pop_back()
{
	// check if we have anything to remove at all
	if( ! this->empty() )
	{
		// remember where the current tail is
		Node* temp = this->tail;

		// if there is only one node in the list
		if( this->head == this->tail )
		{
			// then we don't have anything in the list anymore
			this->head = nullptr;
			this->tail = nullptr;
		}

		// else if there is more than one node in the list
		else
		{
			Node* node = this->head; // we know this is not nullptr
			// here we know nullptr != node->next because
			//   if node = this->head and nullptr == node->next,
			//   then there is only one node in the list,
			//   which means that this->head == this->tail,
			//   so we would have been caught in the previous
			//   if statement

			// we need to reach to one before the tail by iterating
			//   over each node
			//   this could take a while
			while( nullptr != node->next && nullptr != node->next->next )
			{
				node = node->next;
			}

			if( nullptr == node->next )
			{
				// if we could only move one node then we have the *last* node,
				//   not the second-to-last node
				//   this means there are two nodes only
				
			}
			// move the tail one node forward
			this->tail = ???
		}
	}
}


