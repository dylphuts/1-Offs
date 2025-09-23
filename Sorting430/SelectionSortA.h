#ifndef SELECTIONSORTA_H
#define SELECTIONSORTA_H

#include <vector>
using namespace std;

class SelectionSortA{
    private:
        vector<int> array;
        void selectionSortA();
    public:
        SelectionSortA(const vector<int>& data);
        void sort();
        void print();
};

#endif