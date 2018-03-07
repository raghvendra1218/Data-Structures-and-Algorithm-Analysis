/*
Stack.cpp
06-Mar-2018
Raghvendra Dixit
*/
#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

Stack::Stack() {
	stackPtr = nullptr;
}
Stack::~Stack() {
	itemPtr p1;
	itemPtr p2;
	p1 = stackPtr;
	while(p1 != nullptr){
		p2 = p1;
		p1 = p1->prev;
		p2->prev = nullptr;
		delete p2;
	}
}
void Stack::Push(string name, int value) {
	itemPtr n = new item;
	n->name = name;
	n->value = value;
//	n->prev = nullptr;
	if(stackPtr != nullptr){
		n->prev = stackPtr;
		stackPtr = n;
	} else {
		stackPtr = n;
		stackPtr->prev = nullptr;
	}
}
void Stack::readItem(itemPtr r){
	cout<<"--------------------\n";
	cout<<"name : "<<r->name<<endl;
	cout<<"value: "<<r->value<<endl;
	cout<<"--------------------\n";
}
void Stack::Pop() {
	if(stackPtr != nullptr){
		itemPtr p;
		p = stackPtr;
		readItem(p);
		stackPtr = stackPtr->prev;
		p->prev = nullptr;
		delete p;
	} else {
		cout<<"Stack is empty.\n";
	}
}
void Stack::Print() {
	if(stackPtr!= nullptr){
		itemPtr p = stackPtr;
		while(p != nullptr) {
			readItem(p);
			p = p->prev;
		}
	} else {
		cout<<"Stack is empty.\n";
	}
}
