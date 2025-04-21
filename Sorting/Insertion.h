#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <vector>
#include <fstream>

class InsertionSort {
private:
    std::vector<int> arr;
    std::ofstream savefile;

public:
    InsertionSort(const std::vector<int>& data);
    void sort();
    void print();
};

#endif
