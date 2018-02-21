/*
LLIST.cpp
15-Feb-2018
Raghvendra
*/
#include "Single Linked List/LLIST.h"

#include <iostream>
#include <cstdlib>

using namespace std;

List::List() {
	head = nullptr;
	curr = nullptr;
	temp = nullptr;
}

//List::List(int data) {
//	nodePtr n = new node;
//	n->data = data;
//	n->next == nullptr;
//}

void List::addNode(int addData){
	nodePtr n = new node;
	n->data = addData;
	n->next = nullptr;
	if(head!=nullptr){
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
void List::delNode(int delData){
	nodePtr delPtr = nullptr;
	curr = head;
	temp = head;
	while(curr != nullptr && curr->data != delData) {
		temp = curr;
		curr = curr->next;
	}
	if(curr == nullptr){
		cout<<delData<<" is not found in the List"<<endl;
		delete delPtr;
	} else {
		delPtr = curr;
		temp->next = curr->next;
		if(delPtr==head) {
			head = head->next;
//			temp = nullptr;
//			curr = nullptr;
		}
		delete delPtr;
		cout<<"The value "<<delData<<" is deleted from the List"<<endl;
	}
}
void List::addSpecificPoint(int addData, int posData) {
	nodePtr n = new node;
	n->data = addData;
	n->next = nullptr;
//	cout<<posData<<" "<<addData<<endl;
	if(head!=nullptr && head->data!=posData) {
//		cout<<"Raghav came here"<<endl;
		curr = head;
		temp = head;
		while(curr->data!=posData && curr ->next!= nullptr)  {
			temp = curr;
			curr=curr->next;
//			cout<<"Raghav 2 came here"<<endl;
		}
		if(curr->data != posData) {
			cout << posData << " Data not found in the List, try the Data from the List"<<endl;
		} else {
		//Insertion before the specific position
		temp->next = n;
		n->next = curr;
//		Insertion after the specific position
//		n->next = curr->next;
//		curr->next = n;
		}
	}
	else if(head == nullptr) {
		head = n;
	}
	else if (head->data == posData){
		n->next = head;
		head = n;
	}
}
void List::addSortedData(int addData){
	nodePtr n = new node;
	n->data = addData;
	n->next = nullptr;
	if(head!=nullptr){
		curr = head;
		temp = head;
		while(curr->next!= nullptr && n->data >= curr->data) {
			temp = curr;
			curr = curr->next;
		}
		if(curr == head) {
			n->next = head;
			head = n;
		}
		else if(curr->data > n->data) {
			n->next = curr;
			temp->next = n;
		} else {
			curr->next = n;
		}

		//second approach//

//		if(curr->next == nullptr && curr!= head && curr->data < n->data) {
//			curr->next = n;
//		} else {
//			if(curr==head) {
//				n->next = head;
//				head = n;
//			} else {
//				temp->next = n;
//				n->next = curr;
////				n->next = curr->next;
////				curr->next = n;
//			}
//		}
	} else {
		head = n;
	}
}
void List::printList() {
	if(head != nullptr){
		curr = head;
		while(curr != nullptr) {
			cout<<curr->data<<endl;
			curr= curr->next;
		}
		cout<<"********************"<<endl;
	} else {
		cout<<"The list is empty, enter something to print the list!"<<endl;
		cout<<"********************"<<endl;
	}
}
