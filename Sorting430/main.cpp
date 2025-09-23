#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include "MergeSort.h"


using namespace std; 

void generateData(vector<int>& arr);

int main(){
    cout<<"Generating numbers:"<<endl;
    vector<int>merge;
    generateData(merge);
    MergeSort mergeRun(merge);
    mergeRun.sort();
    mergeRun.print();
}

void generateData(vector<int>& arr) {  // note the &
    int size = 100;
    for (int i = 0; i < size; i++) {
        int random = rand() % 101;
        arr.push_back(random);
    }
    cout << "data loaded" << endl;
}
