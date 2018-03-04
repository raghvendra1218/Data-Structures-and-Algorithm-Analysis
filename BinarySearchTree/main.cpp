/*
main.cpp
21-Feb-2018
Raghvendra Dixit
*/
#include <iostream>
#include "BST.h"
using namespace std;
int main()
{
//Todo place code here
	int keys[] = {50, 76, 21, 4, 32, 64, 15, 52, 14, 100, 83, 2, 3, 70, 87, 80};
	BST tree;
//	cout<<"Printing the Tree inorder, before adding numbers"<<endl;
//	tree.printInorder();
	cout<<"Printing the Tree postorder, before adding numbers"<<endl;
	tree.printPostorder();
	for(int i =0; i< (sizeof(keys)/sizeof(keys[0])); i++){
		tree.addLeaf(keys[i]);
	}
//	cout<<"Printing the Tree inorder, after adding numbers"<<endl;
//	tree.printInorder();
	cout<<"Printing the Tree postorder, before adding numbers"<<endl;
	tree.printPostorder();
return 0;
}
