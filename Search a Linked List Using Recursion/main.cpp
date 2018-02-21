/*
main.cpp
21-Feb-2018
Raghvendra
*/
#include <iostream>
#include "LLIST.h"
using namespace std;
int main()
{
	List L, M;
	L.printNode();
	L.addNode(12);
	L.addNode(10);
	L.addNode(14);
	L.addNode(9);
	L.addNode(23);
	L.printNode();
	L.searchRecursive(M.head, 9);
//	L.searchRecursive(L.head, 11);
return 0;
}
