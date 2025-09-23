#ifndef SELECTIONSORTB_H
#define SELECTIONSORTB_H

#include <vector>
using namespace std;

class SelectionSortB{
    private:
        vector<int> array;
        void selectionSortB();
    public:
        SelectionSortB(const vector<int>& data);
        void sort();
        void print();
};

#endif