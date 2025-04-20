#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>
#include <fstream>

using namespace std;

class QuickSort {
private:
    vector<int> arr;
    ofstream savefile;

    void quicksort(int low, int high);
    int partition(int low, int high);

public:
    QuickSort(const vector<int>& data);
    void sort();
    void print();
};

#endif
