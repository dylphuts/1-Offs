#include "MergeSort.h"
#include <iostream>
#include <vector>

using namespace std;

MergeSort::MergeSort(const vector<int>& data){
    array = data;
}

void MergeSort::sort(){
    startSort(0, array.size() - 1);
}

void MergeSort::startSort(int start, int end){
    if (start >= end) return;
    int midpoint = start + (end - start)/2;
    startSort(start, midpoint);
    startSort(midpoint + 1, end);
    mergeArrays(start, midpoint, end);
    
}

void MergeSort::mergeArrays(int start, int midpoint, int end) {
    int n1 = midpoint - start + 1;
    int n2 = end - midpoint;

    vector<int> leftArray(n1);
    vector<int> rightArray(n2);

    for (int i = 0; i < n1; i++) {
        leftArray[i] = array[start + i];
    }

    for (int j = 0; j < n2; j++) {
        rightArray[j] = array[midpoint + 1 + j];
    }

    int i = 0, j = 0, k = start;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

void MergeSort::print(){
    cout<<"Printing Merge Results"<< endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    
}