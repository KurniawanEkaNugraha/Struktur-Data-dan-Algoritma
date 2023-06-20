#include <iostream>
#include "BinaryTree.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree bin;
	
	bin.insertNode(17);
	bin.insertNode(21);
	bin.insertNode(10);
	bin.insertNode(1);
	bin.insertNode(4);
	bin.insertNode(2);
	bin.insertNode(6);
	bin.insertNode(11); 
	bin.insertNode(19);
	bin.insertNode(9);
	bin.insertNode(12);
	
	bin.inOrder();
	cout << endl;
	bin.preOrder();
	cout << endl;
	bin.postOrder();
	cout << endl; 
	return 0;
}