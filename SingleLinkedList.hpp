//template for LinkedList<T> (single linked), MUST have insertion, deletion, traversal, and size operations
#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H



#include <iostream>
#include <string>
#include "ListNode.hpp"
#include "LinearBinarySearch.hpp"

template <typename data>
    // Base class of Single-linked list of ListNode (unsorted)
    class singleLinkedList {
    protected:
        listNode* head;
        listNode* tail;

    public:
        //insertion, deletion, travversal, size op
        //constructor
        singleLinkedList() {
            head = nullptr;
            tail = nullptr;
        }

        //destructor
        virtual ~singleLinkedList() {
            listNode* currentNode = head;
            listNode* deleteNode = nullptr;
            //deletes every node in the list, 
            while (currentNode) {
                deleteNode = currentNode;
                currentNode = currentNode->next;
                delete deleteNode;
            }
        }

        //insertion, technically appending
        void insertNode(data insertData) {
            //edge case for head
            listNode* curr = new listNode(insertData)
            if (head == nullptr) {
                head->data = curr;
                tail->data = curr;
            }
            //insert at tail->next, update tail
            else {
                tail->next = curr;
                tail = curr;
            }
        }

        //deletion, needs head, tail, and middle cases, returns true/false if delete successful
        void delete(data deleteData) {
            //calls linear search to find the data
            listNode* deleteNode = linearSearch(head, deleteData);
            listNode* prevNode = head;
            //if deleteNode nullptr, there's no data to delete
            if(deleteNode == nullptr) {
            }
            else{
                //edge case for head
                if (deleteNode == head) {
                    head = head->next;
                    delete deleteNode;
                }
                else{
                //finds the node before the deleteNode, so prevNode->next = deleteNode               
                while (prevNode->next != deleteNode) {
                    prevNode = prevNode->next;
                }
                //middle case, this makes prevNode->next = node after deleteNode
                prevNode->next = deleteNode->next;
                //if deleteNode is tail, update tail to prevNode
                if (deleteNode != tail) {
                    prevNode->next = deleteNode->next;
                }
                delete deleteNode;
                }
            }
        }
        
        //traversal, idk the purpose of this
        void traverseList() const{
            listNode* curr = head;
            while (curr != nullptr) {
                cout << curr->data << " -> ";
                curr = curr->next;
            }
            cout << "nullptr" << endl;
        }

        //size 
        int getSize() {
            ListNode curr* = head;
            int count = 0;
            while (curr != nullptr) {
                curr = curr->next;
                ++count;
            }
            return count;
        }

        //copy constructor
        singleLinkedList(const singleLinkedList& other) {
            // if other list is empty, set head and tail to nullptr
                if(other.head == nullptr) {
                    head = nullptr;
                    tail = nullptr;
                }
            // otherswise, copy the nodes from the other list to this list
                else {
                    // creates variables currOther and currThis to traverse the other list and copy its data into this list 
                    head = new listNode(other.head->data);
                    listNode* currOther = other.head->next;
                    listNode* currThis = head;

                    // The loop stops until currOther is nullptr
                    while (currOther) {
                        currThis->next = new listNode(currOther->data);
                        currThis = currThis->next;
                        currOther = currOther->next;
                    }
                    // sets currThis to tail of list since the currOther is 1 node higher than currThis 
                    tail = currThis;
                }
        }

        //copy assignment constructor
        singleLinkedList& operator=(const singleLinkedList& other) {
            if(this != &other) {
                //deletes every node in the list
                listNode* currentNode = head;
                listNode* deleteNode = nullptr;
                while (currentNode) {
                deleteNode = currentNode;
                currentNode = currentNode->next;
                delete deleteNode;
            }
            // goes through this if-else statement to copy the other list into this list
            // if other list is empty, set head and tail to nullptr
                if(other.head == nullptr) {
                    head = nullptr;
                    tail = nullptr;
                }
            // otherswise, copy the nodes from the other list to this list
                else {
                    // creates variables currOther and currThis to traverse the other list and copy its data into this list 
                    head = new listNode(other.head->data);
                    listNode* currOther = other.head->next;
                    listNode* currThis = head;

                    // The loop stops until currOther is nullptr
                    while (currOther) {
                        currThis->next = new listNode(currOther->data);
                        currThis = currThis->next;
                        currOther = currOther->next;
                    }
                    // sets currThis to tail of list since the currOther is 1 node higher than currThis 
                    tail = currThis;
                }
            }
        return *this;
        }
        listNode<T>* getHead() const {
            return head;
        }
};



#endif