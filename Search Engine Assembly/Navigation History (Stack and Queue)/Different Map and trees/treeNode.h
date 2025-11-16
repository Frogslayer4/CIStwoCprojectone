//avl tree node variations
//red-black require char or string to indicate black or red
#ifndef TREENODE_H
#define TREENODE_H 

template <typename T>
class treeNode {
    //allows for easy access of left, right, and parent, idk if treeNode should contain functions
    //or be private/protected, but im lazy
public:
    T data;
    treeNode* left;
    treeNode* right;
    treeNode* parent;

    treeNode(T value) : data(value), left(nullptr), right(nullptr), parent(nullptr) {}
    // treeNode is some value
};





#endif
