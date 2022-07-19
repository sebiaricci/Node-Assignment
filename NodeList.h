#pragma once
#define NODELIST
#include "Node.h"
class NodeList {
private:
	static const size_t LIST_SIZE = 500; // the maximum items in the list
	Node* items; // items will point to the dynamically allocated array
	size_t numItems; // the number of items currently in the lis

public:
	NodeList();

	~NodeList();

	void addNode(Node& n); //add a node to the array
	void removeAll(); //remove all nodes
	bool remove(int pos); //remove a node at a certain position given by user in array
	void printAll();//print entire array
	int getNumItems() const; //access number of nodes in array
	Node& getNode(int pos); //access node at a certain position given by user in array

};
#ifndef NODELIST
#endif NODELIST