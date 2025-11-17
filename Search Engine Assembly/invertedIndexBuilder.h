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
#include "BSTMap.h"
#include "HashMap.h"
#include "AVL tree.h"
#include "red-black tree.h"
    //starting using hash map
    // Use a hash map to store the inverted index
    // where the key is a word and the value is a list of document IDs and their frequencies
    // Format should be: word -> {docID -> frequency}


class InvertedIndexBuilder {
private:
    //variables are string for the word, docId, and frequency of the word in the document
    //K for the word, V for requency
    //each document 

public:
    //opens the 4 txt files, reads them, and builds the inverted index using hash map
    //tokenizer function returns a linkedList of the normalized words in the document, which is then used to build the inverted index
    //turns linked list into some translation for sorting and binary search, then adds to the hash map for sorting

    //orders docID by frequency of the word in the document, 
};

#endif
