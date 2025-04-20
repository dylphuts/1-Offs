#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
#include <fstream>

using namespace std;

class MergeSort {
private:
    vector<int> arr;
    ofstream savefile;

    void mergeSort(int left, int right);
    void merge(int left, int mid, int right);

public:
    MergeSort(const vector<int>& data);
    void sort();
    void print();
};

#endif
