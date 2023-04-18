#include <iostream>
#include "Linkedlist.h"
using namespace std;


int main(int argc, char** argv) {
	
	LinkedList linkedlist1;
	
	linkedlist1.insertToHead(30);
	linkedlist1.insertToHead(35);
	linkedlist1.insertToHead(40);
	linkedlist1.insertToHead(45);
	linkedlist1.insertToTail(5);
	linkedlist1.insertAfter(30,50);
	
	cout << "head : " << linkedlist1.head->value << endl;
	cout << "tail : " << linkedlist1.tail->value << endl;	
	cout << linkedlist1.head->next->next->next->value << endl;
	cout << linkedlist1.head->next->next->value << endl;
	linkedlist1.printAll();
	
	
	return 0;
}