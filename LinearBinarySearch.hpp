#ifndef LINEARBINARYSEARCH_H
#define LINEARBINARYSEARCH_H
#include <iostream>
#include <string>
#include <vector>
#include "ListNode.hpp"
using namespace std;
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
listNode<T>* linearSearch(const listNode<T>* head, const T findData){
    listNode* findNode = head;
    while (findNode != nullptr) {
        if (findNode->data == findData) {
            return findNode;
        }
        findNode = findNode->next;
    }
    return nullptr;
}



//sorted vector for binary search, T should be a string
//idk if this is sorted list or sorted vector
template <typename T>
int binarySearch(const vector<T>& sortedVector, const T findData) {
    int left = 0;
    int right = sortedVector.size() - 1;
    int mid;
    while (left <= right) {
        mid = (right + left) / 2;
        // Search in the right half
        if (sortedVector[mid].compare(findData) < 0) {
            left = mid + 1; 
        }
        // Search in the left half
        else if (sortedVector[mid].compare(findData) > 0) {
            right = mid - 1; 
        }
        else{
            return mid; // Element found at index mid
        }
    }
    return -1; // Element not found
}



   

#endif
