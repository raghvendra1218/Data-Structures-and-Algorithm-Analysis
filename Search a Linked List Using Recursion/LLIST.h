/*
 * LLIST.h
 *
 *  Created on: 21-Feb-2018
 *      Author: Raghvendra
 */

#ifndef SEARCH_A_LINKED_LIST_USING_RECURSION_LLIST_H_
#define SEARCH_A_LINKED_LIST_USING_RECURSION_LLIST_H_
class List {
private:
	typedef struct node {
		int data;
		node* next;
	}* nodePtr;
	//Node Pointers to traverse and define the structure of the List
	nodePtr head;
	nodePtr curr;
	nodePtr temp;
	//Defined Recursive function in Private scope, so that it is accessible to it's class member functions only
	void searchRecursive(nodePtr n, int value);

public:
	List();
	void addNode(int addData);
	void printNode();
	//Defined a separate search function, because recursive call requires initial point to start with (which is head), and we donot want user to pass the pointer in argument,
	//hence the need of a second function with only value as argument which in turn will call the recursive function of private scope.
	void search(int value);
};



#endif /* SEARCH_A_LINKED_LIST_USING_RECURSION_LLIST_H_ */
