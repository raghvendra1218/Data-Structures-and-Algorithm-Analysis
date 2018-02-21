/*
LLIST.cpp
21-Feb-2018
Raghvendra
*/
#include "../DSArchive/Search a Linked List Using Recursion/LLIST.h"

#include <iostream>
using namespace std;

List::List() {
	head = nullptr;
	curr = nullptr;
	temp = nullptr;
}
void List::addNode(int addData){
	nodePtr n = new node;
	n->data = addData;
	n->next = nullptr;
	if(head != nullptr) {
		curr = head;
		while(curr->next != nullptr) {
			curr = curr->next;
		}
		curr->next = n;
		n->next = nullptr;
	} else {
		head = n;
	}
}
void List::searchRecursive(nodePtr n, int value){
//	n = head; -- Don't make this blunder of initializing inside of the function,
//	though recursive calls does not seems like to be going in loop (because of missing
//	loops statements, but they do, because of it's in-call function from inside,
//	every time head will initialized to head, by un-commenting this line.
	if(n == nullptr){
		cout<<value<<" is not found in the List"<<endl;
		return;
	}
	else if(n->data == value){
		cout<<value<< " is present in the List"<<endl;
	}
	else {
		searchRecursive(n->next, value);
	}
}
void List::search(int value){
	searchRecursive(head,value);
}
void List::printNode() {
	if(head!=nullptr) {
		curr = head;
		while(curr != nullptr){
			cout<<curr->data<<endl;
			curr = curr->next;
		}
		cout<<"*********************"<<endl;
	} else {
		cout<<"List is empty!"<<endl;
		cout<<"*********************"<<endl;
	}
}
