/*
DLLIST.cpp
19-Feb-2018
Raghvendra
*/
#include <iostream>
#include <cstdlib>
#include "DLLIST.h"
using namespace std;

List::List(){
	head = nullptr;
	tail = nullptr;
	temp = nullptr;
	curr = nullptr;
}
void List::addNode(int addData){
	nodePtr n = new node;
	n->data = addData;
	n->next = nullptr;
	n->prev = nullptr;
	if(head!=nullptr){
		curr = head;
		while(curr->next != nullptr){
			curr = curr->next;
		}
		curr->next = n;
		n->prev = curr;
		tail = n;
	} else {
		head = n;
		tail = n;
	}
}
void List::addSorted(int addNode){
	nodePtr n = new node;
	n->data = addNode;
	n->next = nullptr;
	n->prev= nullptr;
//	nodePtr n = node(addNode);
	if(head != nullptr){
		curr = head;
		while(curr != nullptr && curr->data < addNode) {
			curr = curr->next;
		}
		if(curr == head){
			n->next = curr;
			n->prev = nullptr;
			curr->prev = n;
			head = n;
		}
		else if (curr->data >= addNode){
			n->prev = curr->prev;
			n->next = curr;
			curr->prev->next = n;
			curr->prev = n;
		}
		else if (curr == nullptr) {
			curr->next = n;
			n->prev = curr;
			tail = n;
		}
	} else {
		n->prev = nullptr;
		n->next = nullptr;
		head = n;
		tail = n;
	}
}
void List::delNode(int delData){
	nodePtr del = new node;
	del->next = nullptr;
	del->prev = nullptr;
	if(head!=nullptr && tail!=nullptr){
		curr = head;
		temp = tail;
		while((curr != nullptr && curr->data != delData) && (temp != nullptr && temp->data != delData)){
			curr = curr->next;
			temp = temp->prev;
		}
		if(curr->data == delData){
			if(curr == head){
				del = curr;
				curr->next->prev = nullptr;
				head = curr->next;
				delete del;
			} else {
				del = curr;
				curr->prev->next = curr->next;
				delete del;
			}
		}
		else if(temp->data == delData){
			if(temp == tail) {
				del = temp;
				temp->prev->next = nullptr;
				tail = temp->prev;
				delete del;
			} else {
			del = temp;
			temp->prev->next = temp->next;
			delete del;
			}
		}
		else if(curr ==nullptr || temp == nullptr){
			cout<<"Data not found in the List"<<endl;
		}
	} else {
		cout<<"List is empty!"<<endl;
	}
}
void List::printForward(){
	if(head != nullptr){
		curr = head;
		while(curr != nullptr){
			cout<<curr->data<<endl;
			curr = curr->next;
		}
		cout<<"*************************"<<endl;
	} else {
		cout<<"The List is Empty!"<<endl;
		cout<<"*************************"<<endl;
	}
}
void List::printBackward(){
	if(tail !=nullptr){
		curr = tail;
		while (curr != nullptr){
			cout<<curr->data<<endl;
			curr = curr->prev;
		}
	} else {
		cout<<"The List is empty!"<<endl;
		cout<<"*************************"<<endl;
	}
}
