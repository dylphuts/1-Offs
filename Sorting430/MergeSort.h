#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

using namespace std;

class MergeSort{
    private:
        vector<int> array;

        void startSort(int start, int end);
        void mergeArrays(int start, int mid ,int end);

    public:
        void print();
        MergeSort(const vector<int>& data);
        void sort();
};

#endif