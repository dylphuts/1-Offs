#include "InsertionSort.h"
#include <iostream>
#include <vector>

using namespace std;

InsertionSort::InsertionSort(const vector<int>& data){
    array = data;
}

void InsertionSort::sort(){
    insertionSort();
}

void InsertionSort::insertionSort(){
    int size = array.size();
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i -1;

        while (j>=0 && array[j]>key)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
        
    }
    
}

void InsertionSort::print(){
    cout<<"Printing InsertionSort Results"<< endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    
}