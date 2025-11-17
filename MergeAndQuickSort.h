#ifndef MERGESORTQUICKSORT_H
#define MERGESORTQUICKSORT_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;
// Merge sort and quicksort for std::vector<std::string>
void Merge(vector<string>* letters, int leftFirst, int leftLast, int rightLast){
    int partSize = rightLast - leftFirst + 1;
    vector<string> partition(partSize);

    int posMerge = 0;

    int leftPos = leftFirst;
    int rightPos = leftLast + 1;

    while (leftPos <= leftLast && rightPos <= rightLast){
        if (letters.at(leftPos) <= letters.at(rightPos)){
            partition.at(posMerge) = letters.at(leftPos);
            leftPos++;
        }
        else {
            partition.at(posMerge) = letters.at(rightPos);
            rightPos++;
        }
        posMerge++;
    }

    while (leftPos <= leftLast){
        partition.at(posMerge) = letters.at(leftPos);
        leftPos++;
        posMerge++;
    }

    while (rightPos <= rightLast){
        partition.at(posMerge) = letters.at(rightPos);
        rightPos++;
        posMerge++;
    }

}

void MergeSort(vector<string> letters, int startInd, int endInd){
    if (startInd < endInd){
        int mid = (startInd + endInd)/2;

        MergeSort(letters, startInd, mid);
        MergeSort(letters, mid + 1, endInd);

        Merge(letters, startInd, mid, endInd);
    }
}

int Partition(vector<string> chars, int lowInd, int highInd){
    int mid = (lowInd + (highInd-lowInd)/2);
    int pivot = chars.at(midpoint);

    bool done = false;
    while (!done){
        while (chars.at(lowInd) < pivot){
            lowInd++;
        }

        while (chars.at(highInd) > pivot){
            highInd--;
        }

        if (lowInd >= highInd){
            done = true;
        }
        else {
            char temp = chars.at(lowInd);
            chars.at(lowInd) = chars.at(highInd);
            chars.at(highInd) = temp;

            lowInd++;
            highInd--;
        }
    }
    return highInd;
}

void Quicksort(vector<string> chars, int startInd, int endInd){
    if( endInd <= startInd){
        return;
    }

    int high = Partition(chars, startInd, endInd);

    Quicksort(chars, startInd, high);
    
    Quicksort(chars, high + 1, endInd);
    
}





#endif
