/*
main.cpp
20-Feb-2018
Raghvendra Dixit
*/
#include <iostream>
#include "DLLIST.h"
using namespace std;
int main()
{
//Todo place code here
	List L;
	L.printForward();
//	L.addNode(2);
//	L.addNode(11);
//	L.addNode(14);
//	L.addNode(16);
//	L.addNode(15);
	L.addSorted(12);
	L.addSorted(10);
	L.addSorted(11);
	L.addSorted(9);
	L.addSorted(8);
	L.printForward();
//	L.printBackward();
//	L.delNode(2);
//	L.printForward();
return 0;
}
