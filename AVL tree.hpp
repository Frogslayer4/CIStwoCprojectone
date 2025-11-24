#ifndef AVLTREE_H
#define AVLTREE_H
#include "treeNode.hpp"
#include <stdexcept>
#include <iostream>

// AVL tree node, inherits class treeNode, adds height variable for balancing
template <typename K, typename V>
class AVLTreeNode : public treeNode {
public: 
    int height;
//Needs constructor to initialize height, destructor to free memory, and functions to get/set height,
// and to perform rotations (left, right, left-right, right-left)

AVLTreeNode(K key1, V value1) : treeNode(key1, value1), height(0) {

}
// destructor calls on treeNode destructor to free memory
    
};


template <typename K, typename V>
class AVLTreeMap {
private:
    treeNode<K, V>* root;
public:
    AVLTreeMap() : root(nullptr) {}
    ~AVLTreeMap() {
        delete root;
    }
    // Implement the insert function for the AVLTreeMap, which should insert a new key-value pair or update the value if the key already exists.
    void insertTreeNode(K key, V value) {
        // AVL tree insertion logic goes here
    }
    // Implement the search function for the AVLTreeMap, which should return the value associated with a given key or throw an exception if the key is not found.
    V search(K key) {
        // AVL tree search logic goes here
    }
};

#endif