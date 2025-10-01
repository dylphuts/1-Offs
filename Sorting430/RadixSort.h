#ifndef RADIXSORT_H
#define RADIXSORT_H

#include <vector>
using namespace std;

class RadixSort {
public:
    RadixSort(const vector<int>& data);
    void sort();
    void print();

private:
    vector<int> array;

    void radixSort();  // internal implementation
};

#endif
