#ifndef LINEARBINARYSEARCH_H
#define LINEARBINARYSEARCH_H
#include <iostream>
#include <string>
#include "ListNode.h"
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}
/*
Linear Search : On an unsorted list["c", "a", "b"], searching for "a" should find it.

Binary Search : On a sorted list["a", "b", "c"], searching for "c" should find it.

Binary Search(Miss) : On a sorted list["a", "b", "c"], searching for "z" should not find it.
*/


//given list unsorted, returns node before node that needed to be found
template <typename T>
listNode* linearSearch(const listNode* head, const T findData){
    listNode* findNode = head;
    while (findNode != nullptr) {
        if (findNode->data == findData) {
            return findNode;
        }
        findNode = findNode->next;
    }
    return nullptr;
}


//sorted vector for binary search
template <typename T>
listNode binarySearch{

}



   

#endif
