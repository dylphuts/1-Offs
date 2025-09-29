#include "BubbleSortA.h"
#include <iostream>
#include <vector>

using namespace std;

BubbleSortA::BubbleSortA(const vector<int>& data){
    array = data;
}

void BubbleSortA::sort(){
    bubbleSortA();
}

void BubbleSortA::bubbleSortA(){
    int size = array.size();
    for (int i = 0; i<size - 1; i++){
        for(int j = 0; j < size -i -1; j++ ){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j +1];
                array[j+1] = temp;
            }
        }
    }
    
}

void BubbleSortA::print(){
    cout<<"Printing BubbleSortA Results"<< endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    
}