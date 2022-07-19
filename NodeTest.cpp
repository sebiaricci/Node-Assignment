#include <iostream>
#include "Node.h"
#include "NodeList.h"
using namespace std;

int Node::objCount = 0;

 void testClone() {
    Node v;
    v.setID(5);
    v.setWeight(5);
    short expected = 5;
    if (v.clone().getID() == expected && v.clone().getWeight()==expected) {
        cout << "Clone test passed.\n";
    }
}

 void testObjCount(){
     Node v1(5, 3.0);
     v1.clone();
     Node v2;
     cout << Node::getObjCount() << " objects of Node have been created!" << endl; //displays amount of node objects created
     }

void testSetGetFunctions() {
    Node v;
    v.setID(5);
    v.setWeight(5);
    short expected = 5;
    if (v.getID() == expected)cout << "id test passed\n";
    if (v.getWeight() == expected)cout << "weight test passed\n";
}

void testAddNodeFunction() {
    Node a(3,4), b(1,69);
    NodeList nList;

    nList.addNode(a);
    nList.addNode(b);
    int count = nList.getNumItems(); // getNumItems function test passed
    int expected = 2;
    if (count == expected) cout << "Add Node function test passed.\n"; //checks if the two node objects are added to nList
}

void testRemoveAll() {
    Node a(3, 4), b(1, 69);
    NodeList nList;

    nList.addNode(a);
    nList.addNode(b);

    nList.removeAll();

    Node c = nList.getNode(0); // getNode function test passed

    if (c.getWeight() != a.getWeight() && c.getID() != a.getID()) {
        cout << "Remove all test passed.\n";
    }
}

void testRemove() {
    Node a(3, 4), b(1, 69);
    NodeList nList;

    nList.addNode(a);
    nList.addNode(b);
}

void testPrintAll() {
    Node a(3, 4), b(1, 69);
    NodeList nList;

    nList.addNode(a);
    nList.addNode(b);

    nList.printAll();
}

int main()
{
    Node v;
    testSetGetFunctions();
    testClone();
    testObjCount();

    NodeList t;
    testAddNodeFunction();
    testRemoveAll();
    testPrintAll();


}