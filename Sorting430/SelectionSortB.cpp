#include "SelectionSortB.h"
#include <iostream>
#include <vector>

using namespace std;

SelectionSortB::SelectionSortB(const vector<int>& data){
    array = data;
}

void SelectionSortB::sort(){
    selectionSortB();
}

void SelectionSortB::selectionSortB(){
    int n = array.size();
    for (int i = 0; i < n; i++)
    {
       int min = i;
       for (int j = i+1; j < n; j++)
       {
            if(array[j]<array[min]){
                min = j;
            }
       }
        
    int temp = array[i];
    array[i] = array[min];
    array[min] = temp;
    }
    
}

void SelectionSortB::print(){
    cout<<"Printing SelectionSortB Results"<< endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    
}