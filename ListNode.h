#pragma once

#ifndef NUMBERLISTNODE_H
#define NUMBERLISTNODE_H

#include <iostream>
#include <string>
using namespace std;

template <typename Node>
class listNode {
protected:
    Node data;
    listNode<Node>* next;

public:
    // Constructs this node with the specified data value. The next
    // and previous pointers are each assigned nullptr.
    listNode(Node initialData) {
        data = initialData;
        next = nullptr;
    }

    // Constructs this node with the specified data value, next ptr
    listNode(Node initialData, listNode<Node>* nextNode) {
        data = initialData;
        next = nextNode;
    }

    virtual ~listNode() {
    }

    // Returns this node's data.
    virtual Node getData() {
        return data;
    }

    // Sets this node's data.
    virtual void setData(Node newData) {
        data = newData;
    }

    // Gets this node's next pointer.
    virtual listNode<Node>* GetNext() {
        return next;
    }

    // Sets this node's next pointer.
    virtual void setNext(listNode<Node>* newNext) {
        next = newNext;
    }

};

#endif