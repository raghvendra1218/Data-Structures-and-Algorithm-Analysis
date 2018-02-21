/*
 * DLLIST.h
 *
 *  Created on: 19-Feb-2018
 *      Author: Raghvendra
 */

#ifndef DOUBLY_LINKED_LIST_DLLIST_H_
#define DOUBLY_LINKED_LIST_DLLIST_H_

class List {
private:
	typedef struct node {
		int data;
		node* next;
		node* prev;
//		node(int val) : data(val), next(nullptr), prev(nullptr) {}
	}* nodePtr ;
	nodePtr head;
	nodePtr tail;
	nodePtr temp;
	nodePtr curr;
public:
	List();
	void addNode(int addData);
	void delNode(int delData);
	void printForward();
	void printBackward();
	void addSorted(int addNode);

};

#endif /* DOUBLY_LINKED_LIST_DLLIST_H_ */
