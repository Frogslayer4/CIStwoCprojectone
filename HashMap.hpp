// separate-chaining hash table 
#ifndef HASHMAP_H
#define HASHMAP_H
#include <iostream>
#include <string>
#include <vector>
#include "SingleLinkedList.hpp"
using namespace std;

template <typename K, typename V>
class HashMap {
private:
    vector<SingleLinkedList<std::pair<K, V>>> buckets;
    int numBuckets;
    int size;

    int hashFunction(const K& key) {
        return std::hash<K>{}(key) % numBuckets;
    }   


};



#endif