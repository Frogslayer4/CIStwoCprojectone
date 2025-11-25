#ifndef MERGESORTQUICKSORT_H
#define MERGESORTQUICKSORT_H
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <string>
#include <sstream>
#include "SingleLinkedList.hpp"
using namespace std;

//possible change return type

singleLinkedList<string> tokenizer(ifstream& inputFile) {
    string line;
    int lineNumber = 0;
    vector<string> vectorLine;
    vector<string> normalizedWords;
    singleLinkedList<string> list;
    string randomWord;
    string normWord;
    while (getline(inputFile, line)) {

        //each loop gets a line from inputFile until it can't anymore, each line is then put into vectorLine
        vectorLine.push_back(line);
    }
        //each line in vectorLine is iterated to put into stringstream, each word of stringstream is put into randomWord
    for (const string stringLine : vectorLine) {
        stringstream ss(stringLine);
        while (ss >> randomWord) {
            for (char ch : randomWord) {
                //double check, each character is checked if it is an alpha, digit, or + (because + is part of punctuation)
                if (isalpha(static_cast<unsigned char>(ch)) || isdigit(static_cast<unsigned char>(ch)) || ('+' == ch)) {
                    normWord += tolower(static_cast<unsigned char>(ch));
                }
            }
            if (!normWord.empty()) {
                normalizedWords.push_back(normWord);
            }
            normWord = "";
        }
    }
    //this part is where we expect to initalize list
    for (string stringNode : normalizedWords) {
        list.insertNode(stringNode);
    }
    return list;
}



#endif
//store words into the text file, test words coming out, LinkedList<std::string>
//Your tokenizer should read a file, normalize all words to lowercase, and strip all punctuation.

