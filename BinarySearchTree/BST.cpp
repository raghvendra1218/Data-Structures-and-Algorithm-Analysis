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
void BST::printPreorder(){
	printPreorderPrivate(root);
}
void BST::printPreorderPrivate(nodePtr n) {
	if(root !=nullptr){
		cout<<n->data<<" ";
		if(n->left != nullptr){
			printPreorderPrivate(n->left);
		}
		if(n->right != nullptr) {
			printPreorderPrivate(n->right);
		}
	} else {
		cout<<"Tree is empty"<<endl;
		cout<<"********************"<<endl;
	}
}
void BST::search(int data) {
	nodePtr searchedData;
	searchedData = returnNode(data);
	cout<<endl;
	if(searchedData != nullptr && searchedData->data == data) {
		cout<<data<<" Data found in the List"<<endl;
	} else {
		cout<<"Data not found"<<endl;
	}
}
BST::nodePtr BST::returnNode(int data) {
	return returnNodePrivate(data, root);
}
BST::nodePtr BST::returnNodePrivate(int data, nodePtr n) {
	if(n != nullptr){
		if(data == n->data){
			return n;
		} else {
			if(data < n->data){
				return returnNodePrivate(data, n->left);
			} else {
				return returnNodePrivate(data, n->right);
			}
		}
	} else {
		return nullptr;
	}
}
int BST::returnRootKey(){
	if(root!=nullptr){
		return root->data;
	} else {
		return -1000; //As we do not have negative number we are just doing a work around
	}
}
void BST::printChildren(int data){
	nodePtr current = returnNode(data);
	if(current != nullptr){
		cout<<"Parent Node = "<<current->data<<endl;
		current->left != nullptr ?
		cout<<"Left Child = "<<current->left->data<<endl :
		cout<<"Left Child = "<<"NULL"<<endl;
		current->right != nullptr ?
		cout<<"Right Child = "<<current->right->data<<endl :
		cout<<"Right Child = "<<"NULL"<<endl;
	} else {
		cout<<"Data "<<data<<" is not present in the tree"<<endl;
	}
}
