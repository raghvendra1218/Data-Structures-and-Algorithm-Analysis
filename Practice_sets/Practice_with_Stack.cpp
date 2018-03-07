/*
Pb1.cpp
21-Jan-2018
Raghvendra
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
//Todo place code here
	stack<int> myStack1, myStack2;
	for(int i=0; i<10; i++){
		myStack1.push(i);
	}
	for(int i=0; i<5; ++i){
		myStack2.push(i);
	}
	cout<<"My Stack top is at " <<myStack1.top()<<endl;
	myStack1.top() -= 5;
	cout<<"My Stack top is at " <<myStack1.top()<<endl;
//	myStack1.swap(myStack2);
//	cout<<"Popping out Elements of Stack 1"<<endl;
//	while(!myStack1.empty()) {
//		cout<<myStack1.top()<<endl;
//		myStack1.pop();
//	}
//	cout<<"Popping out Elements of Stack 2"<<endl;
//	while(!myStack2.empty()) {
//		cout<<myStack2.top()<<endl;
//		myStack2.pop();
//	}
//	myStack.push (2);
//	while(!myStack.empty()){
//		cout<<myStack.top()<<endl;
//		myStack.pop();
//	}
//	cout<<"Popping out Elements"<<endl;
//	while(!myStack.empty()) {
//		cout<<myStack.top()<<endl;
//		myStack.pop();
//	}
return 0;
}
