//avl tree node variations
//red-black require char or string to indicate black or red
#ifndef TREENODE_H
#define TREENODE_H 

template <typename K, typename V>
class treeNode {
    //allows for easy access of left, right, and parent, idk if treeNode should contain functions
    //or be private/protected, but im lazy
public:
    T key;  // the string key
    V value; // # of keys in document
    treeNode* left;
    treeNode* right;
    treeNode* parent;

    
treeNode(K key1, V value1) : key(key1), value(value1), left(nullptr), right(nullptr), parent(nullptr) {}
~treeNode() {
    // Implement a destructor to free memory
    delete left;
    delete right;



    
};





#endif