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
        treeNode<K>* root;
    public:
        BSTMap() : root(nullptr) {} 
        ~BSTMap() {
            // actually delete the tree nodes to free memory
            delete root;
        }
        // Implement the insert function for the BSTMap, which should insert a new key-value pair or update the value if the key already exists.
        void insertTreeNode(K key, V value) {
            
            }
        }
}; 

    // Node* root;