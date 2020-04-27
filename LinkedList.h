//
// Created by Kevin Leong on 4/24/20.
//

#include <iostream>

using namespace std;

#include "Node.h"

#ifndef PROGRAM5_LINKEDLIST_H
#define PROGRAM5_LINKEDLIST_H

template <typename Type>

class LinkedList {
public:
    Node<Type>* head;
    Node<Type>* tail;
    int size;

    //Constructors
    LinkedList(){
        head = tail = nullptr;;
        size = 0;
    }

    //Rule of Three
    ~LinkedList(){
        Node<Type>* temp = head;
        for(int i = 0; i < size; i++){
            delete temp;
            temp = temp-> next;
        }
    }

    LinkedList(const LinkedList& copy){
//        this->head = copy.head;
//        this->tail = copy.tail;
        this->size = 0;

        Node<Type>* temp = copy.head;
        for(int i = 0; i < copy.size; i++){
           // Node<Type>* newNode = new Node<Type>(temp->payload);
            push_back(temp->payload);
            temp = temp->next;
        }
    }

   LinkedList &operator=(const LinkedList & copy) {
        if (this != &copy) {
            this->size = 0;

            Node<Type>* temp = copy.head;
            for(int i = 0; i < copy.size; i++){
                //Node<Type>* newNode = new Node<Type>(temp->payload);
                push_back(temp->payload);
                temp = temp->next;
            }
        }

        return *this;
    }


    //insert and remove functons
    void push_back(Type data){
        if(head == nullptr){
            head = new Node<Type>(data);
            tail = head;
            size++;
        }

        else{
            tail->next = new Node<Type>(data);
            tail->next->previous = tail;
            tail = tail->next;
            size++;
        }
    }

    void remove(Type data){
        size--;
        if(head->payload == data){
            Node<Type>* temp = head;
            temp->next->previous = nullptr;
            head = temp->next;
            delete temp;
        } else
        if(tail->payload == data){
            Node<Type>* temp = tail;
            temp->previous->next = nullptr;
            tail = temp->previous;
            delete temp;
        } else {
            Node<Type>*temp = head;
            while (temp != nullptr) {
                if (temp->payload == data) {
                    temp->previous->next = temp->next;
                    temp->next->previous = temp->previous;
                    delete temp;
                }
                temp = temp->next;
            }
        }
    }

    int pop(){
        Node<Type>* temp = head;
        head = temp->next;
        size--;

        return temp->payload;
    }

    //access method
    Type getPayloadAtIndex(int index){
        Node<Type>* temp = head;
        for(int i = 0; i < index; ++i){
            temp = temp->next;
        }
        return temp->payload;
    }

    //getSize
    int getSize(){
//        if(head == nullptr){
//            return 0;
//        }
//        if(head == tail){
//            return 1;
//        }
//
//        Node<Type>* temp = head;
//        int size = 1;
//
//        while(temp != tail){
//            temp = temp->next;
//            temp++;
//        }
        return size;
    }

    //printing functions
    void printList() {
        Node<Type>* temp = head;

        while(temp != nullptr){
            cout << temp->payload << "->";
            temp = temp->next;
        }
        cout << endl;
    }

};


#endif //PROGRAM5_LINKEDLIST_H
