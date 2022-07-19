#include <iostream>
#include "Node.h"
using namespace std;


Node::Node() {
	objCount++; //increase count of objects created
	cout << "Default constructor called.\n";
}

Node::Node(short id, double value) {
	this->id = id;
	this->weight = value;

	objCount++; //increase count of objects created
	
	cout << "Parameterized constructor called." << endl;
}

Node::Node(const Node& other) {
	this->id = other.id;
	this->weight = other.weight;
}

Node::~Node() {
	objCount--; //decrease number of objects created
	cout << "Node Destructor called\n";	
}

int Node::getObjCount() {
	return objCount;
}


void Node::setID(short value) {
	this->id = value;
}

short Node::getID() {
	return id;
}

void Node::setWeight(short value) {
	this->weight = value;
}
double Node::getWeight() {
	return weight;
}

Node Node::clone() { //clones the id and weight of already created node
	Node v;
	v.id = this->id;
	v.weight = this->weight;
	return v;
}
