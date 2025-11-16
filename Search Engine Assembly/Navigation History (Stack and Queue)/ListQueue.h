#ifndef LISTQUEUE_H
#define LISTQUEUE_H
//template for ListQueue<T> (LinkedList-backed) enqueue, front, size, dequeue, isempty
//also used for history of search engine queries, this is used for the history queue of when user goes "forward" in the search engine, "backward" is for stack
#include <iostream>
#include <vector>
#include "SingleLinkedList.h"

template<typename T>
class ListQueue {
private:
    SingleLinkedList<T> queue; 
public:
    //constructor
    ListQueue() {
        queue = SingleLinkedList<T>();
    }

    //enqueue
    void enqueue(T item) {
        queue.insertNode(item);
    }

    //size
    int size() {
        return queue.getSize();
    }

    //isempty
    bool isempty() {
        return queue.isempty();
    }

    //dequeue, does nothing if empty, otherwise calls deleteNode 
    void dequeue() {
        if (queue.isempty()) {
            throw std::out_of_range("Queue is empty");
        }
        else(){
            queue.deleteNode(queue.head->data);
        }
    }
};


#endif