// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <vector>
#include <string>
#include <cassert>

#include "ArrayStack.h"
//phase 1 core containers & tokenizer
#include "ListNode.h"
#include "MergeSort&QuickSort.h"
#include "ListQueue.h"
#include "SingleLinkedList.h"
//still needs tokenizer
//phase 2 sorting
#include "MergeSort&QuickSort.h"
#include <print>
using namespace std;

/*
note: destructor, copy constructor, & assignment operator fully functional
note: isempty can be used to check for nullptr at front for list, nothing inside array, or nullptr for the tree root
notation: t is anything, k represents any tree, v represents node
PHASE 1 CORE CONTAINERS & TOKENIZER
template for LinkedList<T> (single linked), MUST have insertion, deletion, traversal, and size operations
template for ArrayStack<T> (vector) push, top, size, isempty, pop
template for ListQueue<T> (LinkedList-backed) enqueue, front, size, dequeue, isempty
tokenizer to read text and push normalized words into LinkedList<std::string>
learn CLI demo & run small tests on for  it to ensure the program works

PHASE 2 SORTING & SEARCHING
Merge sort + quicksort for std::vector<std::string>
learn basic timing harness
do linear search with unsorted list and binary search for sorted vector (ArrayStack)

PHASE 3 MAPS -> each calls search method which is find
BSTMap<K (tree), V (node)> (unbalanced) with insert/find/erase + inorder traversal
HASHMAP<K (tree), V (node)> (separate chaining: put everything with same index in that bucket) with load factor & rehash, similar to bst map

PHASE 4 Balanced Trees
AVLTreeMap<K, V> (rotations & height maintenance)
RBTreeMap<K,V> (insert fixups: recolor/rotate)

PHASE 5 Search engine assembly


inverted index builder???
inverted index map (hashmap) prints out word -> docID belongs to
query multiword means containing all docs it belongs to, with ranking of documents that contain all query items

(word -> {docID ->frequency})
query processing & simple TF socring + history navigation with stack/std::queue<T> ;
Done by sdfdsfdsfdsfdsfasdfasdf

benchmarks & report

use long_sorted.txt for testing tree performance

*/


void testListNodeString() {
    cout << "Running testListNodeString..." << endl;

    // Create node
    ListNode<string> node1("hello");
    assert(node1.GetData() == "hello");

    // Link nodes
    ListNode<string> node2("world");
    node1.SetNext(&node2);

    assert(node1.GetNext() == &node2);
    assert(node1.GetNext()->GetData() == "world");

    cout << "testListNodeString passed!" << endl;
}

int main() {
    // Create nodes
    ListNode<int>* head = new ListNode<int>(10);
    ListNode<int>* node2 = new ListNode<int>(20);
    ListNode<int>* node3 = new ListNode<int>(30);

    // Link nodes
    head->SetNext(node2);
    node2->SetNext(node3);

    // Traverse and print
    ListNode<int>* current = head;
    while (current != nullptr) {
        cout << current->GetData();
        cout << " -> ";
        current = current->GetNext();
    }
    cout << "nullptr" << endl;

    // Cleanup
    current = head;
    while (current != nullptr) {
        ListNode<int>* temp = current;
        current = current->GetNext();
        delete temp;
    }

    return 0;
}