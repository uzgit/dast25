#include "singly_linked_list.hpp"

#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello, World!" << endl;

	// just using the constructor
	SinglyLinkedList* list1 = new SinglyLinkedList();

	// populating
	cout << "populating list1..." << endl;
	for(int i = 0; i < 10; i ++)
	{
		list1->push_front(i + 100);
	}
	cout << "done populating list1!" << endl << endl;

	// outputting the list in a nice way
	cout << *list1 << endl;

//	cout << "checking if list1 contains various items..." << endl;
//	for(int i = 105; i < 115; i ++)
//	{
//		cout << "contains(" << i << "): " << list1->contains(i) << endl;
//	}
//	cout << "done checking!" << endl << endl;

//	cout << "instantiating lista" << endl;
//	SinglyLinkedList lista;
//	cout << "setting lista = *list1 via operator= ..." << endl;
//	lista = * list1;
//	cout << "outputting lista..." << endl;
//	cout << lista << endl << endl;

//	cout << "creating and populating list2..." << endl;
//	SinglyLinkedList list2;
//	// populating
//	for(int i = 0; i < 10; i ++)
//	{
//		list2.push_front (i + 200);
//	}
//	cout << "done populating list2:" << endl;
//	cout << list2 << endl << endl;;

//	cout << "pushing all the items from list2 onto list1..." << endl;
//	list1->push_all(list2);
//	cout << "list1: " << endl;
//	cout << *list1 << endl << endl;;

//	cout << "creating list5 from list1..." << endl;
//	SinglyLinkedList* list5 = new SinglyLinkedList(*list1);
//	cout << "list5: " << *list5 << endl;
//	cout << "*list1 == *list5 ? " << (*list1 == *list5 ? "equal! :)" : "not equal :(") << endl << endl;
	
//	SinglyLinkedList* list6 = new SinglyLinkedList(*list5);
//	cout << "list6: " << *list6 << endl;
//	cout << (*list1 == *list6 ? "equal! :)" : "not equal :(") << endl << endl;

//	for(int temp = 0; temp < 500; temp ++)
//	{
//		SinglyLinkedList* list1 = new SinglyLinkedList();
//		for(int i = 0; i < 100000; i ++)
//		{
//			list1->push_front(i + 100);
//		}
//		//cout << *list1 << endl << endl;
//		delete list1; // comment this line to cause a memory leak! :)
//	}
//	//std::this_thread::sleep_for(std::chrono::milliseconds(10000)); // uncomment this line to see the memory leak! :)

//	SinglyLinkedList::Iterator iterator = list1->begin();
//	cout << "outputting list1 via iterator: " << endl;
//	cout << "[ ";
//	while( iterator != list1->end() )
//	{
//		cout << *iterator << " ";
//
//		//++iterator;
//		iterator++;
//	}
//	cout << "]" << endl;

//	// copy constructor
//	cout << "here" << endl;
//	SinglyLinkedList list99(*list1);
//	cout << list99 << endl;
//	cout << "done" << endl;

//	// destructor
//	delete list1;

	cout << "end of main!" << endl;

	return 0;
}
