#pragma once
#define NODE
class Node {
private:
	int id;
	int weight;
	static int objCount;

public:
	Node();

	Node(short id, double value);

	Node(const Node &other);

	virtual ~Node();

	static int getObjCount();
	
	void setID(short value);
	short getID();

	void setWeight(short value);
	double getWeight();

	Node clone();
};
#ifndef NODE
#endif NODE
