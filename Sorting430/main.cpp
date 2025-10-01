#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include "MergeSort.h"
#include "Quicksort.h"
#include "SelectionSortA.h"
#include "SelectionSortB.h"
#include "InsertionSort.h"
#include "BubbleSortA.h"
#include "BubbleSortB.h"
#include "BubbleSortC.h"
#include "CountingSort.h"
#include <ctime> // for time()



using namespace std; 

void generateData(vector<int>& arr);

int main(){
    srand(static_cast<unsigned int>(time(0))); // seed rand

    cout<<"Running Sort tests"<<endl;
    vector<int>data;
    generateData(data);
    SelectionSortA selectionA(data);
    selectionA.sort();
    selectionA.print();

    data.clear();
    generateData(data);
    SelectionSortB selectionB(data);
    selectionB.sort();
    selectionB.print();
    
    data.clear();
    generateData(data);
    MergeSort mergeRun(data);
    mergeRun.sort();
    mergeRun.print();

    data.clear();
    generateData(data);
    QuickSort quickRun(data);
    quickRun.sort();
    quickRun.print();

    data.clear();
    generateData(data);
    InsertionSort insertRun(data);
    insertRun.sort();
    insertRun.print();

    data.clear();
    generateData(data);
    BubbleSortA bubbleARun(data);
    bubbleARun.sort();
    bubbleARun.print();
    
    data.clear();
    generateData(data);
    BubbleSortB bubbleBRun(data);
    bubbleBRun.sort();
    bubbleBRun.print();
    
    data.clear();
    generateData(data);
    BubbleSortC bubbleCRun(data);
    bubbleCRun.sort();
    bubbleCRun.print();
    
    data.clear();
    generateData(data);
    CountingSort CountRun(data);
    CountRun.sort();
    CountRun.print();
}

void generateData(vector<int>& arr) {
    int size = 100;
    for (int i = 0; i < size; i++) {
        int random = rand() % 101;
        arr.push_back(random);
    }
    cout << "data loaded" << endl;
}
