#ifndef BubbleSortC_H
#define BubbleSortC_H

#include <vector>
using namespace std;

class BubbleSortC{
    private:
        vector<int> array;
        void bubbleSortC();
    public:
        BubbleSortC(const vector<int>& data);
        void sort();
        void print();
};

#endif