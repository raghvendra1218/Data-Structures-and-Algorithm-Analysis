/*
Practice_with_Lists.cpp
07-Mar-2018
Raghvendra Dixit
*/
#include <iostream>
#include <list>
using namespace std;
int main()
{
//Assignement of Lists
	list<int> myList1;
	myList1.assign(7,100);
	cout<<"Size of List1 is "<<myList1.size()<<endl;
	//Copy one list content from one List to Another
	list<int> myList2;
	myList2.assign(myList1.begin(),myList1.end());
	cout<<"Size of List2 is "<<myList2.size()<<endl;
	//assigning from an array
	int myarr[] = {1,2,3};
	list<int>myList3;
	myList3.assign(myarr,myarr+3);
	cout<<"Size of List3 is "<<myList3.size()<<endl;
	cout<<"Last element in the List is " <<myList3.back()<<endl;
//Traversing elements inside a List
	//myList1
	cout<<"MY List1"<<endl;
//	list<int>::iterator it;
	//Iterator can be initialised using auto keyword as well
	auto it = myList1.begin();
	for(; it != myList1.end(); it++){
		cout<<" "<<*it;
	}
	cout<<endl;
	//Clear the List
	myList1.clear();
	//Push the element at the end
	myList1.push_back(1103);
	myList1.push_back(1102);
	myList1.push_back(1100);
	myList1.push_back(1105);
	//To Insert an element in the front of the List
//	myList1.push_front(1108);
	//Sort the List
//	myList1.sort();
	//Reverse a List
//	myList1.reverse();
//	cout<<"Max Size "<<myList1.max_size()<<endl;
	auto it1 = myList1.begin();
//	list<int>::iterator it1 = myList1.end()-1; This Iterator operation will not work will give an error, However it will work fine with Vector Iterator
	for( ; it1 != myList1.end(); it1++){
		cout<<" "<<*it1;
	}
	//
return 0;
}
