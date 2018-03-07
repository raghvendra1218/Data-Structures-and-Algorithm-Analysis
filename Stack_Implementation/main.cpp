/*
main.cpp
06-Mar-2018
Raghvendra Dixit
*/
#include <iostream>

#include "../DSArchive/Stack_Implementation/Stack.h"
using namespace std;

int main()
{
//Todo place code here
	Stack myStack;
	myStack.Push("Raghav", 27);
	myStack.Push("Varun", 25);
	myStack.Push("Sahil", 24);
	myStack.Push("Vinayak", 28);
	myStack.Print();
	cout<<"Popping an item"<<endl;
	myStack.Pop();
	myStack.Pop();
	myStack.Pop();
	myStack.Pop();
	cout<<"New Stack: "<<endl;
	myStack.Print();

return 0;
}
