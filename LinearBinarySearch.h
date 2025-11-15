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


//given list unsorted
template <typename T>
listNode linearSearch(const listNode head, const T deleteData){
    listNode deleteNode = head;
    while (deleteNode != nullptr) {
        if (deleteNode->data == deleteData) {
            return deleteNode;
        }
        deleteNode = deleteNode->next;
    }
    return nullptr;
}


//given list sorted
listNode binarySearch{

}



   

#endif
