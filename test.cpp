#include <iostream>
#include <cassert>
#include <vector>

#include "Node.h"
#include "LinkedList.h"

#include "Transaction.h"
#include "Cash.h"

using namespace std;

struct SimpleData {
    int data;
};

int main() {
    cout << "-- Test Bench --\n" << endl;
    cout << "-- Some example tests for vector (Remove and replace with Linked Lists Tests) --\n" << endl;


    //Test 1 = Node Constructor
    Node<int> node(1);
    assert(node.payload == 1);
    cout << "Node constructor works" << endl << endl;

    //Test 2 = LinkedList
    LinkedList<int> list;
    list.push_back(1);
    int size = list.getSize();
    assert(size == 1);
    cout << "getSize() and LinkedList works" << endl << endl;

    //Test 3 = printList
    list.push_back(2);
    list.push_back(3);
    list.push_back(5);
    list.push_back(6);
    list.push_back(7);
    list.printList();
    cout << "The list print works" << endl << endl;

    //Test 4 = pop
    int popped = list.pop();
    cout << "Popped: " << popped << endl;
    list.printList();
    assert(popped == 1);
    cout << "Pop Test passed" << endl << endl;

    //Test 5 = getAtIndex
    assert(list.getPayloadAtIndex(0) == 2);
    cout << "get@Index Passed" << endl << endl;

    //Test 6 == remove
    list.printList();
    list.remove(3);
    list.printList();
    list.remove(2);
    list.printList();
    list.remove(7);
    list.printList();
    cout <<  endl;
    assert(list.getPayloadAtIndex(0) == 5);
    cout << "Remove works" << endl << endl;

    //Test 7 = Copy Constructor
    list.push_back(1);
    list.push_back(2);
    LinkedList<int> copyList(list);
    cout << "Original List:";
    list.printList();
    cout << "Copy constructor:";
    copyList.printList();
    assert(list.getPayloadAtIndex(0) == copyList.getPayloadAtIndex(0));
    cout << "Copy Constructor Works" << endl << endl;

//    //Test 8 = Copy Assignment Operator
//    LinkedList<int> copyAssOpList;
//    copyAssOpList = copyList;
//    cout << "Original List:";
//    copyList.printList();
//    cout << "Copy constructor:";
//    copyAssOpList.printList();
//    assert(copyList.getPayloadAtIndex(0) == copyAssOpList.getPayloadAtIndex(0));
//    cout << "Copy Assignment Operator Works" << endl << endl;

    //Test 9 = Linked List made of Objects
    LinkedList<Transaction> transLinkedList;
    Transaction trans;
    transLinkedList.push_back(trans);
    assert(transLinkedList.size == 1);
    cout << "Linked List supports Objects" << endl << endl;

    //Test 10 = Linked List Objects Polymorphism
    Cash cash;
    transLinkedList.push_back(cash);
    assert(transLinkedList.size == 2);
    cout << "Linked List supports Objects with Polymorphism" << endl << endl;

    //Test 11 = Linked List made of Pointers
    LinkedList<Transaction*> transPointerLinkedList;
    Transaction* point = &trans;
    transPointerLinkedList.push_back(point);
    assert(transPointerLinkedList.size == 1);
    cout << "Linked List supports Pointers" << endl << endl;

    cout << "All Tests Passed!" << endl;

    return 0;
}