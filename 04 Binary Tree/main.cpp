#include <iostream>
#include "BinaryTree.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree bin;
	
	bin.insertNode(38);
	bin.insertNode(23);
	bin.insertNode(12);
	bin.insertNode(13);
	bin.insertNode(29);
	bin.insertNode(31);
	bin.insertNode(62);
	bin.insertNode(52);
	bin.insertNode(56);
	
	bin.inOrder();
	cout << endl;
	bin.preOrder();
	cout << endl;
	bin.postOrder();
	cout << endl; 
	return 0;
}