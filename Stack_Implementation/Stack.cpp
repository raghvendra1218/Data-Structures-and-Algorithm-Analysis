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

}
