#include "CountingSort.h"
#include <iostream>
#include <vector>

using namespace std;

CountingSort::CountingSort(const vector<int>& data){
    array = data;
}

void CountingSort::sort(){
    countingSort();
}

void CountingSort::countingSort(){
    if(array.empty()) return;

    int size = array.size();

    int maxValue = array[0];

    for (int i = 0; i < size; i++)
    {
        if(array[i] >maxValue){
            maxValue = array[i];
        }
    }
    
    vector<int> count(maxValue +1, 0);

    for (int i = 0; i < size; i++)
    {
        count[array[i]]++;
    }

    for (int i = 1; i <= maxValue; i++)
    {
        count[i] += count[i - 1];
    }
    
    vector<int> output(size);
    for(int i = size -1; i>= 0; i--){
        int value = array[i];
        count[value]--;
        output[count[value]] = value;
    }
    
    array = output;
}

void CountingSort::print(){
    cout<<"Printing CountingSort Results"<< endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    
}