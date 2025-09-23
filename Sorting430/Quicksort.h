#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>
using namespace std;

class QuickSort {
    private:
        vector<int> array;
        int partition(int start, int end);
        void quickSort(int start, int end);

    public:
        QuickSort(const vector<int>& data);
        void sort();
        void print();
};

#endif