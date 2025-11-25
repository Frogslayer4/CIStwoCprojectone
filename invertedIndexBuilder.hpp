// this is supposed to use navigation history, 

/*
Build an inverted index from a directory of documents, storing word frequency and document lists.

Process user queries by retrieving and ranking documents containing the search terms.

Use the stack and queue from Part 1 to implement back/forward history navigation for viewed documents.

Test map and tree implementations for query processing and document retrieval

Actions for Full Search Engine

query processing, 


*/


#ifndef INVERTEDINDEXBUILDER_H
#define INVERTEDINDEXBUILDER_H
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <filesystem>
#include <fstream>

#include "BSTMap.hpp"
#include "HashMap.hpp"
#include "AVL tree.hpp"
#include "red-black tree.hpp"
#include "SingleLinkedList.hpp"
#include "Tokenizer.hpp"
#include "ListNode.hpp"
#include "MergeAndQuickSort.hpp"

using namespace std;
    //starting using hash map
    // Use a hash map to store the inverted index
    // where the key is a word and the value is a docID
    // Format should be: word -> {docID -> frequency}


class InvertedIndexBuilder {
private:
    vector<BSTMap<string, int>> AllMap;
    vector<string> docID; 
    BSTMap<string, int> bst; // word -> (docID, frequency)
public:
    //opens the 4 txt files, reads them, and builds the inverted index using hash map
    //tokenizer function returns a linkedList of the normalized words in the document, which is then used to build the inverted index
    //turns linked list into some translation for sorting and binary search, then adds to the hash map for sorting

    //orders docID by frequency of the word in the document, 
    //given a vector of docIDs, sort them 
    InvertedIndexBuilder(vector<string> DirectoryinputFile) {
        //creates bst map for the inverted index, where the key is a word and the value is frequency count
        for(string inputFile : DirectoryinputFile) {
            ifstream file(inputFile);
            if (file.is_open()) {
                cout << inputFile << "opened successfully.\n";
            }
            else {
                //error handling
                cout << "Error opening file: " << inputFile << endl;
                break;
            }
            singleLinkedList<string> list = tokenizer(file);
            vector<string> sorting; 
            listNode<string> *curr = list.getHead();
            while (curr != nullptr) {
                sorting.push_back(curr->getData());
                curr = curr->getNext();
            }
            //assume this sorts the list of words, then iterates through the sorted list to add each word to the BSTMAP, with the docID (name) and frequency count updated for each word, if in same docID, iterates frequency count here
            Quicksort(sorting, 0, sorting.size() - 1);
            for (const string& word : sorting) {
                
                bst.insertTreeNode(word, 1); // Insert word and frequency 1
            }  
            //put the bst into the AllMap vector, string for fileName into docID, and close file
            AllMap.push_back(bst);
            docID.push_back(inputFile);
            file.close();
        }
    }       
};

#endif
