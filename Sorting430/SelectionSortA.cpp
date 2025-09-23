#include "SelectionSortA.h"
#include <iostream>
#include <vector>

using namespace std;

SelectionSortA::SelectionSortA(const vector<int>& data){
    array = data;
}

void SelectionSortA::sort(){
    selectionSortA();
}

void SelectionSortA::selectionSortA(){
    int n = array.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(array[j]<array[i]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        
    }
    
}

void SelectionSortA::print(){
    cout<<"Printing SelectionSortA Results"<< endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    
}