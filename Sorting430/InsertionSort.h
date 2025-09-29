#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <vector>
using namespace std;

class InsertionSort{
    private:
        vector<int> array;
        void insertionSort();
    public:
         InsertionSort(const vector<int>& data);
         void sort();
         void print();


};

#endif