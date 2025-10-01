#include "RadixSort.h"
#include <iostream>
#include <vector>
using namespace std;

RadixSort::RadixSort(const vector<int>& data) {
    array = data;
}

void RadixSort::sort() {
    radixSort();
}

void RadixSort::radixSort() {
    if (array.empty()) return;

    int n = array.size();

    int maxVal = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }

    int bit = 0;
    while ((maxVal >> bit) > 0) {
        vector<int> output(n);
        int count[2] = {0, 0};

        for (int i = 0; i < n; i++) {
            int bitVal = (array[i] >> bit) & 1;
            count[bitVal]++;
        }

        count[1] += count[0];
        for (int i = n - 1; i >= 0; i--) {
            int bitVal = (array[i] >> bit) & 1;
            count[bitVal]--;
            output[count[bitVal]] = array[i];
        }
        array = output;

        bit++;
    }
}

void RadixSort::print() {
    cout << "Printing RadixSort Results" << endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;
}
