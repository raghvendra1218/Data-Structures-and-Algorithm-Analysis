/*
test.cpp
16-Feb-2018
Raghvendra
*/
#include <iostream>

#include "Single Linked List/LLIST.h"

using namespace std;
int main()
{
//Todo place code here
	List L;
	L.printList();
//	L.addNode(10);
//	L.addNode(12);
//	L.addNode(5);
//	L.printList();
//	L.addSpecificPoint(9,10);
//	L.printList();
//	L.addSpecificPoint(11,9);
//	L.printList();
	L.addSpecificPoint(13,12);
	L.printList();
	L.addSpecificPoint(14,5);
//	L.delNode(10);
	L.addSortedData(1);
	L.addSortedData(0);
	L.addSortedData(6);
	L.addSortedData(3);
	L.addSortedData(5);
	L.addSortedData(4);
	L.addSortedData(2);
	L.printList();
return 0;
}
