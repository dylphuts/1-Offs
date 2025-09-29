#ifndef BubbleSortB_H
#define BubbleSortB_H

#include <vector>
using namespace std;

class BubbleSortB{
    private:
        vector<int> array;
        void bubbleSortB();
    public:
        BubbleSortB(const vector<int>& data);
        void sort();
        void print();
};

#endif