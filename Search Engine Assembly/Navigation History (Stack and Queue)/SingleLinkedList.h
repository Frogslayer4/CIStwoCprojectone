//template for LinkedList<T> (single linked), MUST have insertion, deletion, traversal, and size operations
#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H



#include <iostream>
#include <string>
#include "ListNode.h"
#include "LinearBinarySearch.h"

template <typename data>
    // Base class of Single-linked list of ListNode (unsorted)
    class singleLinkedList {
    protected:
        listNode* head;
        listNode* tail;
        //size 

    public:
        //insertion, deletion, travversal, size op
        //constructor
        singleLinkedList() {
            head = nullptr;
            tail = nullptr;
        }

        //destructor
        virtual ~singleLinkedList() {
            
        }
       
        //insertion, technically appending
        void insertNode(data insertData) {
            //edge case for head
            listNode curr = new listNode(insertData)
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

        //deletion, needs head, tail, and middle cases
        void deleteNode(data deleteData) {
            //calls linear search to find the data
            listNode deleteNode = (head, deleteData)
            
        }
        
        //traversal, prints every element
        void traverseList() const
        {}

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

        
};



#endif