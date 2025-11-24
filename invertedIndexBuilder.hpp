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
#include "BSTMap.hpp"
#include "HashMap.hpp"
#include "AVL tree.hpp"
#include "red-black tree.hpp"
#include "SingleLinkedList.hpp"
#include "Tokenizer.hpp"
    //starting using hash map
    // Use a hash map to store the inverted index
    // where the key is a word and the value is a docID
    // Format should be: word -> {docID -> frequency}


class InvertedIndexBuilder {
private:
    //variables are string for the word, docId, and frequency of the word in the document
    //stores frequency count for each word in the document, and the document ID
    //frequency count is the number of times the word appears in the document, docID is the unique identifier for the document
    BSTMap<string, vector<pair<string, int>>> bst; // word -> (docID, frequency)
public:
    //opens the 4 txt files, reads them, and builds the inverted index using hash map
    //tokenizer function returns a linkedList of the normalized words in the document, which is then used to build the inverted index
    //turns linked list into some translation for sorting and binary search, then adds to the hash map for sorting

    //orders docID by frequency of the word in the document, 
    //given a vector of docIDs, sort them 
    InvertedIndexBuilder(ifstream& inputFile) {
        //creates BSTMAP then reads the input file and builds the inverted index
        singleLinkedList <string> list = tokenizer(inputFile);
        vector<string> sorting; // Assuming toVector() converts the linked list to a vector of strings
        
        //sorts the list of words, then iterates through the sorted list to add each word to the BSTMAP, with the docID (name) and frequency count updated for each word, if in same docID, iterates frequency count here
        
    }
        // constructor code to initialize the inverted index
    
    
};

#endif
