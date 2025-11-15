//use BSTMap as an inverted index mapping words to document IDs.
#ifndef BSTMAP_H
#define BSTMAP_H

#include <iostream>
#include <string>       
#include <vector>
#include "treeNode.h"

/*
Insert New: Insert a new key-value pair. search() for that key and confirm the correct value is returned.

Insert Update: Insert a key that already exists with a new value. search() for that key and confirm the value has been updated.

Search Miss: search() for a key that does not exist. 
Your function should clearly indicate failure (e.g., return nullptr, false, or throw an exception).

Critical Performance Test (Trees): 
This is the most important test for comparing your trees.

Use your long_sorted.txt file.


*/
template <typename K, typename V>

class BSTMap {
private:
    struct Node {
        K key;
        V value;
        Node* left;
        Node* right;

        Node(K k, V v) : key(k), value(v), left(nullptr), right(nullptr) {}

    };

    // Node* root;