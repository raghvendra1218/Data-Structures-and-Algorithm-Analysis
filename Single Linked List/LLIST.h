/*
 * LLIST.h
 *
 *  Created on: 15-Feb-2018
 *      Author: Raghvendra
 */

#ifndef SINGLE_LINKED_LIST_LLIST_H_
#define SINGLE_LINKED_LIST_LLIST_H_

class List {
private:
	typedef struct node {
		int data;
		node* next;
	}* nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr temp;
//	List(int data);
public:
	List();
	void addNode(int addData);
	void delNode(int delData);
	void addSpecificPoint(int addData, int posData);
	void addSortedData(int addData);
	void printList();
};

#endif /* SINGLE_LINKED_LIST_LLIST_H_ */
