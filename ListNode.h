#ifndef NUMBERLISTNODE_H
#define NUMBERLISTNODE_H

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class listNode {
protected:
    T data;
    listNode<T>* next;

public:
    // Constructs this node with the specified data value. The next
    // and previous pointers are each assigned nullptr.
    listNode(T initialData) {
        data = initialData;
        next = nullptr;
    }

    virtual ~listNode() {
    }

    // Returns this node's data.
    virtual T getData() {
        return data;
    }

    // Sets this node's data.
    virtual void setData(T newData) {
        data = newData;
    }

    // Gets this node's next pointer.
    virtual listNode<T>* getNext() {
        return next;
    }

    // Sets this node's next pointer.
    virtual void setNext(listNode<T>* newNext) {
        next = newNext;
    }

};

#endif