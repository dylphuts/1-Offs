#ifndef CountingSort_H
#define CountingSort_H

#include <vector>
using namespace std;

class CountingSort{
    private:
        vector<int> array;
        void countingSort();
    public:
        CountingSort(const vector<int>& data);
        void sort();
        void print();
};

#endif