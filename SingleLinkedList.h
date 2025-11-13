//template for LinkedList<T> (single linked), MUST have insertion, deletion, traversal, and size operations
#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H



#include <iostream>
#include <string>
#include "ListNode.h"


template <typename data>
    // Base class of Single-linked list of ListNode (unsorted)
    class SingleLinkedList {
    protected:
        listNode* head;
        listNode* tail;
        //size 

    public:
        //insertion, deletion, travversal, size op
        //constructor
        SingleLinkedList() {
            head = nullptr;
            tail = nullptr;
        }

        //destructor
        virtual ~NumberList() {
        }

        //head
        listNode* GetHead() const {
            return head;
        }

        //tail
        listNode*
       
        //insertion, technically appending
        void insertNode(data insertData) {
            //edge case for head
            if (head == nullptr) {
                head->data = new listNode;
                tail->data = new listNode;
            }
            //insert at tail->next

        }

        //deletion
        void deleteNode(data deleteData) {
        
        }
        
        //traversal

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



*/
#endif