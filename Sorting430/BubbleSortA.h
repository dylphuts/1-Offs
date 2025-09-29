#ifndef BubbleSortA_H
#define BubbleSortA_H

#include <vector>
using namespace std;

class BubbleSortA{
    private:
        vector<int> array;
        void bubbleSortA();
    public:
        BubbleSortA(const vector<int>& data);
        void sort();
        void print();
};

#endif