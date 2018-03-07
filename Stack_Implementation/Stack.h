/*
 * Stack.h
 *
 *  Created on: 06-Mar-2018
 *      Author: Raghvendra
 */

#ifndef STACK_H_
#define STACK_H_
# include<string>
using namespace std;
class Stack {
private:
	typedef struct item {
		string name;
		int value;
		item* prev;
	}* itemPtr;

	itemPtr stackPtr;
public:
	void Push(string name, int value);
	void Pop();
	void readItem(itemPtr r);
	void Print();
	Stack();
	~Stack();
};

#endif /* STACK_H_ */
