/*
main.cpp
21-Feb-2018
Raghvendra
*/
//Output of the below program
/*List is empty!
*********************
12
10
14
9
23
*********************
9 is present in the List
11 is not found in the List
 */

#include <iostream>

#include "../DSArchive/Search a Linked List Using Recursion/LLIST.h"
using namespace std;
int main()
{
	List L;
	L.printNode();
	L.addNode(12);
	L.addNode(10);
	L.addNode(14);
	L.addNode(9);
	L.addNode(23);
	L.printNode();
	L.search(9);
	L.search(11);
//	L.searchRecursive(L.head, 11); //cannot access the private member function "searchRecursive" from other function will throw error.
return 0;
}
