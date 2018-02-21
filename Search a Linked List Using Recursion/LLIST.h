/*
 * LLIST.h
 *
 *  Created on: 21-Feb-2018
 *      Author: Raghvendra
 */

#ifndef LLIST_H_
#define LLIST_H_
class List {
public:
	typedef struct node {
		int data;
		node* next;
	}* nodePtr;
	nodePtr head;
	nodePtr curr;
	nodePtr temp;

public:
	List();
	void addNode(int addData);
	void printNode();
	void searchRecursive(nodePtr n, int value);
};



#endif /* LLIST_H_ */
