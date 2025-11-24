#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
//template for ArrayStack<T>(vector) push, top, size, isempty, pop
// this is used for the history stack of when user goes "backward" in the search engine, "forward" is for queue
#include <iostream>
#include <vector>
using namespace std;
    template<typename T>

    class ArrayStack {
    private:
        vector<T> stack;   
    public:
        //constructor
        ArrayStack() {
            stack = vector<T>();
        }
        //destructor
        ~ArrayStack() {
        }
        //copy constructor, calls on copy assignment operator to copy the stack
        ArrayStack(const ArrayStack& other) {
            ArrayStack<T> newStack = other;

        }
        //
        

        //push
        void push(T data) {
            stack.push_back(data);
        }

        //top
        T top() {
            if (stack.empty()) {
                throw std::out_of_range("Stack is empty");
            }
            return stack.back();
        }

        //size
        int size() {
            return stack.size();
        }

        //isempty
        bool isempty() {
            return stack.empty();
        }

        //pop
        void pop() {
            if (stack.empty()) {
                throw std::out_of_range("Stack is empty");
            }
            stack.pop_back();
        }
    };  

#endif