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

//	// populating
//	for(int i = 0; i < 10; i ++)
//	{
//		list1->push_front(i + 100);
//	}
//
//	// outputting the list in a nice way
//	cout << *list1 << endl;

//	SinglyLinkedList list2;
//	// populating
//	for(int i = 0; i < 10; i ++)
//	{
//		list2.push_front (i + 200);
//	}
//	cout << list2 << endl;
//
//	// testing the push_all function
//	list1->push_all(list2);
//	cout << *list1 << endl;

//	// destructor
//	delete list1;

//	for(int temp = 0; temp < 1000; temp ++)
//	{
//		SinglyLinkedList* list1 = new SinglyLinkedList();
//		for(int i = 0; i < 100000; i ++)
//		{
//			list1->push_front(i + 100);
//		}
//		//cout << *list1 << endl << endl;
//		//delete list1;
//	}
//	std::this_thread::sleep_for(std::chrono::milliseconds(10000));

	cout << "end of main!" << endl;

	return 0;
}
