#include "BubbleSortB.h"
#include <iostream>
#include <vector>

using namespace std;

BubbleSortB::BubbleSortB(const vector<int>& data){
    array = data;
}

void BubbleSortB::sort(){
    bubbleSortB();
}

void BubbleSortB::bubbleSortB(){
    int size = array.size();
    bool swapped = true;

    while (swapped)
    {
        swapped = false;
        for (int i = 0; i<size - 1; i++){
            if(array[i]>array[i+1]){
                swapped = true;
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        size--;
    }
    
}

void BubbleSortB::print(){
    cout<<"Printing BubbleSortB Results"<< endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    
}