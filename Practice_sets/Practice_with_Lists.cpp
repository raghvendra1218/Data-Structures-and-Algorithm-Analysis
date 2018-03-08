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
	//To check the Last element in the List
	cout<<"Last element in the List is " <<myList3.back()<<endl;
	//Removing an Element from the List using the value
	myList3.remove(3);
	cout<<"LIST 3: "<<endl;
	auto it3 = myList3.begin();
	for(; it3 != myList3.end(); it3++){
		cout<<*it3<<",";
	}
	cout<<endl;
	//Removing the element from the List using iterator
	int myarr2[] = {1,2,3,4,5,6,7,8,9,10};
	list<int> myList4;
	myList4.assign(myarr2, myarr2+10);
	cout<<"Size of list 4: "<<myList4.size()<<endl;
	list<int>::iterator ite1 = myList4.begin();
	ite1++;
	auto ite2 = myList4.begin();
	advance(ite2,6);
//	cout<<*ite2<<endl;
	myList4.erase(ite1,ite2);  //Range Deletion of the List
	auto ite = myList4.begin();
	for(; ite != myList4.end(); ite++){
		cout<<*ite<<",";
	}
	//Traversing elements inside a List
	//myList1
	cout<<endl;
	cout<<"List 1: "<<endl;
//	list<int>::iterator it;
	//Iterator can be initialised using auto keyword as well
	auto it = myList1.begin();
	for(; it != myList1.end(); it++){
		cout<<*it<<",";
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
		cout<<*it1<<",";
	}
	//
return 0;
}
