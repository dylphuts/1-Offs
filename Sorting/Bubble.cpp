#include "Bubble.h"
#include <iostream>
using namespace std;

Bubble::Bubble(const vector<int>& data)
    : arr(data), savefile("Bubble_Sort.txt") {}

void Bubble::sort() {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void Bubble::print() {
    for (int num : arr) {
        savefile << num << endl;
    }
    cout <<"Bubble Sort Ran" << endl;
}
