#include "singly_linked_list.hpp"

#include <iostream>

using namespace std;

int main()
{
	cout << "Hello, World!" << endl;

	cout << "Instantiating a singly-linked list of integers..." << endl;
	SinglyLinkedList integers;

	int insertions[10] = {523, 12, 64, 745, 2, 34567, 865, 2, 35, 432};
	for( int number : insertions )
	{
		integers.push_front( number );
	}

	cout << "************************************************************" << endl;
	cout << integers << endl;
	cout << "************************************************************" << endl;

	SinglyLinkedList integers2(integers);

	cout << "popping 3 numbers..." << endl;
	for( int i = 0; i < 3; i ++ )
	{
		integers2.pop_front();
	}

	cout << integers2 << endl;
	cout << "done popping 3 numbers..." << endl;
	cout << "************************************************************" << endl;
	
	int insertions_2[3] = {999, 888, 777};
	for( int number : insertions_2 )
	{
		integers2.push_front( number );
	}

	cout << integers2 << endl;
	cout << "************************************************************" << endl;

	integers2.front() = 42; // bad idea

	cout << integers2 << endl;
	cout << "************************************************************" << endl;

	SinglyLinkedList integers3;
	integers3 = integers2;
	integers3.front() = 99;

	cout << integers2 << endl << integers3 << endl;

	return 0;
}
