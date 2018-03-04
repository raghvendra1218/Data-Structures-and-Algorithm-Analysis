/*
BST.cpp
21-Feb-2018
Raghvendra Dixit
*/
#include <iostream>
#include "BST.h"

using namespace std;

BST::BST(){
	root = nullptr;
}
BST::nodePtr BST::createLeaf(int addData){
	nodePtr n = new node;
	n->data = addData;
	n->left = nullptr;
	n->right = nullptr;
	return n;
}
void BST::addLeaf(int addData){
	addPrivateLeaf(addData,root);
}
void BST::addPrivateLeaf(int addData, nodePtr n) {
	if(root == nullptr) {
		root = createLeaf(addData);
	}
	else if(addData < n->data) {
		if(n->left != nullptr){
			addPrivateLeaf(addData, n->left);
		} else {
			n->left = createLeaf(addData);
		}
	}
	else if(addData > n->data) {
		if(n->right != nullptr){
			addPrivateLeaf(addData, n->right);
		} else {
			n->right = createLeaf(addData);
		}
	}
}
void BST::printInorder() {
	printInorderPrivate(root);
}
void BST::printInorderPrivate(nodePtr n){
	if(root != nullptr){
		if(n->left != nullptr){
			printInorderPrivate(n->left);
		}
		cout<<n->data<<" ";
		if(n->right != nullptr){
			printInorderPrivate(n->right);
		}
	} else {
		cout<<"Tree is empty"<<endl;
		cout<<"********************"<<endl;
	}
}
void BST::printPostorder() {
	printPostorderPrivate(root);
}

void BST::printPostorderPrivate( nodePtr n){
	if(root != nullptr) {
		if(n->left != nullptr) {
			printPostorderPrivate(n->left);
		}
		if(n->right != nullptr){
			printPostorderPrivate(n->right);
		}
		cout<<n->data<<" ";
	} else {
		cout<<"Tree is empty"<<endl;
		cout<<"********************"<<endl;
	}
}

