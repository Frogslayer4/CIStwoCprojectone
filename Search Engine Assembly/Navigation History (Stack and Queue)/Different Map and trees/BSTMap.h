//use BSTMap as an inverted index mapping words to document IDs.
#ifndef BSTMAP_H
#define BSTMAP_H

#include <iostream>
#include <string>       
#include <vector>
#include "treeNode.h"
#include <stdexcept>
/*
Insert New: Insert a new key-value pair. search() for that key and confirm the correct value is returned.

Insert Update: Insert a key that already exists with a new value. search() for that key and confirm the value has been updated.

Search Miss: search() for a key that does not exist. 
Your function should clearly indicate failure (e.g., return nullptr, false, or throw an exception).

Critical Performance Test (Trees): 
This is the most important test for comparing your trees.

Use your long_sorted.txt file.
https://learn.zybooks.com/zybook/DEANZACIS22CEftekhariFall2025/chapter/7/section/13 uses this example

*/
template <typename K, typename V>

class BSTMap {
    private:
        treeNode<K, V>* root;
    public:
        BSTMap() : root(nullptr) {} 
        ~BSTMap() {
            // actually delete the tree nodes to free memory
            delete root;
        }
        // Implement the insert function for the BSTMap, which should insert a new key-value pair or update the value if the key already exists.
        //key is string, value is the document ID
        void insertTreeNode(K key, V value) {
            treeNode<K, V>* newNode = new treeNode<K, V>(key, value);
            if (root == nullptr) {
                root = newNode;
            }
            else {
                treeNode* currNode = root;
                //Traverses the tree to update/insert key-value pair
                while (currNode) {
                    // If the new key is less than the current node's key, go left
                    if (newNode->key < currNode->key) {
                        // if left is null, insert new node there
                        if (currentNode->left == nullptr) {
                        currNode->left = newNode;
                        currNode = nullptr;
                        }
                        //adds value if there's already a node with the same key
                        else if (currNode->left->key == newNode->key) {
                            currNode->left->value = newNode->value + currNode->left->value;
                            currNode = nullptr;
                        }
                        // if not, keep going left
                        else {
                            currNode = currNode->left;
                        }
                    }
                    // if greater, goes right
                    else (newNode->key > currNode->key){
                        //if right is nullptr, insert new node there
                        if (currNode->right == nullptr) {
                            currNode->right = newNode;
                            currNode = nullptr;
                        }
                        //otherwise, if there's already a node with the same key, add the value to it
                        else if (currNode->right->key == newNode->key) {
                            currNode->right->value = newNode->value + currNode->right->value;
                            currNode = nullptr;
                        }
                        //repeats the process if not
                        else {
                            currNode = currNode->right;
                        }
                    }
                }
            }
        }
        //Search: search() finds key, otherwise throws an exception to indicate failure
        V search(K key) {
            treeNode<K, V>* currNode = root;
            while (currNode) {
                if (key == currNode->key) {
                    return currNode->value;
                }
                else if (key < currNode->key) {
                    currNode = currNode->left;
                }
                else {
                    currNode = currNode->right;
                }
            }
            // If the key is not found, throw an exception or return a default value
            throw std::out_of_range("Key not found in BSTMap");
        }

}; 

// Node* root;
#endif