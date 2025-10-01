#include "BubbleSortC.h"
#include <iostream>
#include <vector>

using namespace std;

BubbleSortC::BubbleSortC(const vector<int>& data){
    array = data;
}

void BubbleSortC::sort(){
    bubbleSortC();
}

void BubbleSortC::bubbleSortC(){
    int size = array.size();
    bool swapped = true;

    while (swapped)
    {
        swapped = false;
        for (int i = size-1; i>0; i--){
            if(array[i]<array[i-1]){
                swapped = true;
                int temp = array[i];
                array[i] = array[i-1];
                array[i-1] = temp;
            }
        }
        size--;
    }
    
}

void BubbleSortC::print(){
    cout<<"Printing BubbleSortC Results"<< endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    
}