/*
 * BST.h
 *
 *  Created on: 21-Feb-2018
 *      Author: Raghvendra
 */

#ifndef BST_H_
#define BST_H_

class BST {
private:
	typedef struct node {
		int data;
		node* left;
		node* right;
	}* nodePtr;
	//Pointers to traverse and define the structure of tree
	nodePtr root;
	nodePtr createLeaf(int addData);
	void addPrivateLeaf(int addData, nodePtr n);
	void printInorderPrivate(nodePtr n);   //will print the left->root->right
	void printPostorderPrivate(nodePtr n); //will print the left->right->root
	void printPreorderPrivate(nodePtr n); // will print the root->left->right
	nodePtr returnNode(int data); // helper function
	nodePtr returnNodePrivate(int data, nodePtr n);
public:
	BST();
	void addLeaf(int addData);
	void printInorder();
	void delData();
	void printPostorder();
	void printPreorder();
	void search(int data);
	void printChildren(int data);
	int returnRootKey();   //Helper function just to get the data inside the root

};


#endif /* BST_H_ */
