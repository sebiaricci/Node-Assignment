#include <iostream>
#include "NodeList.h"
#include <string>
using namespace std;

NodeList::NodeList() {
	cout << "Default constructor is called.\n";
	items = new Node[LIST_SIZE];
}

NodeList::~NodeList() {
	cout << "NodeList destructor is called\n";
	delete[] items; 
}

void NodeList::addNode(Node& n) {
	items[numItems] = n; //the object corresponds to the index depending on numItems in array
	numItems++; //increase count of numItems
}

void NodeList::removeAll() {
	items = new Node[LIST_SIZE]; //new array created that will be NULL, removes all created nodes
	numItems = 0; //no more nodes therefore numItems will be zero
}

bool NodeList::remove(int pos) {
	if (items[pos].getID() != NULL){
		return false;
	}
	else {
		items[pos] = { };
		items[pos - 1];
	}
}

void NodeList::printAll() {
	for (int i = 0; i < LIST_SIZE; i++) {
		cout << items[i].getID() << "-" << items[i].getWeight() << endl; //print the id and weight of all node objects in array
	}
}

int NodeList::getNumItems() const {
	return numItems; //returns the number of items
}

Node& NodeList::getNode(int pos) {
	return items[pos]; //returns the node at the particular position given by user
}