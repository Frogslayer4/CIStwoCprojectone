#ifndef HISTORY_H
#define HISTORY_H

#include <string>
#include <fstream>
#include "ArrayStack.hpp"
#include "ListQueue.hpp"

class HistoryNavigation {
private:
    ArrayStack<string> back;
    ListQueue<string> forward;
    std::string current;

public:
    History() : current("") {}

    void view(const std::string& doc) {
        if (!current.empty()) {
            back.push(current);
        }
        current = doc;

        // new view clears forward history
        forward.clear();
    }

    bool canBack() const { return !back.isEmpty(); }
    bool canForward() const { return !forward.isEmpty(); }

    std::string goBack() {
        if (back.isEmpty()) return current;

        forward.push(current);
        current = back.top();
        back.pop();
        return current;
    }

    std::string goForward() {
        if (forward.isEmpty()) return current;

        back.push(current);
        current = forward.top();
        forward.pop();
        return current;
    }

    const std::string& currentDoc() const { return current; }
};

#endif
