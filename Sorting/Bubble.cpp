#include "Bubble.h"
#include <iostream>
using namespace std;

Bubble::Bubble(const vector<int>& data) {
    arr = data;
}

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

void Bubble::print() const {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
