/*
LLIST.cpp
21-Feb-2018
Raghvendra
*/
#include <iostream>
#include "LLIST.h"
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
	n = head;
	if(n == nullptr){
		cout<<value<<" is not found in the List"<<endl;
	}
	else if(n->data == value){
		cout<<value<< "is present in the List"<<endl;
	}
	else {
		searchRecursive(n->next, value);
	}
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
