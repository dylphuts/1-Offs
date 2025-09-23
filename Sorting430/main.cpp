#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include "MergeSort.h"
#include "Quicksort.h"


using namespace std; 

void generateData(vector<int>& arr);

int main(){
    cout<<"Generating numbers:"<<endl;
    vector<int>data;
    generateData(data);
    MergeSort mergeRun(data);
    mergeRun.sort();
    mergeRun.print();
    data.clear();
    generateData(data);
    QuickSort quickRun(data);
    quickRun.sort();
    quickRun.print();
    
}

void generateData(vector<int>& arr) {
    int size = 100;
    for (int i = 0; i < size; i++) {
        int random = rand() % 101;
        arr.push_back(random);
    }
    cout << "data loaded" << endl;
}
