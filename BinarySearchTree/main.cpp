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
//	cout<<"Printing the Tree postorder, before adding numbers"<<endl;
//	tree.printPostorder();
	cout<<"Printing the Tree preorder, before adding numbers"<<endl;
	tree.printPreorder();
	for(int i =0; i< (sizeof(keys)/sizeof(keys[0])); i++){
		tree.addLeaf(keys[i]);
	}
//	cout<<"Printing the Tree inorder, after adding numbers"<<endl;
//	tree.printInorder();
//	cout<<"Printing the Tree postorder, after adding numbers"<<endl;
//	tree.printPostorder();
	cout<<"Printing the Tree preorder, after adding numbers"<<endl;
	tree.printPreorder();
//	tree.search(52);
	tree.printChildren(tree.returnRootKey());
//	Printing each and every parent-child relationship in the tree
	for(int i =0; i< (sizeof(keys)/sizeof(keys[0])); i++){
		tree.printChildren(keys[i]);
	}
//	int smallest = tree.returnSmallestValue();
//	cout<<endl;
//	cout<<"Sammlest value in the tree is "<<smallest<<endl;
return 0;
}
