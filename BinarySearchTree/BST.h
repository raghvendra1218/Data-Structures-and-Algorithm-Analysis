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
	void printInorderPrivate(nodePtr n);
	void printPostorderPrivate(nodePtr n);
	void printPreorderPrivate(nodePtr n);
public:
	BST();
	void addLeaf(int addData);
	void printInorder();
	void delData();
	void printPostorder();
	void printPreorder();
};


#endif /* BST_H_ */
