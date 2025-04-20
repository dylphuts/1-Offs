#include "Quick.h"
#include <iostream>
using namespace std;

QuickSort::QuickSort(const vector<int>& data)
    : arr(data), savefile("Quick_Sort.txt") {}

void QuickSort::sort() {
    quicksort(0, arr.size() - 1);
}

void QuickSort::quicksort(int low, int high) {
    if (low >= high) return;

    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            ++i;
        }
    }
    swap(arr[i], arr[high]);

    quicksort(low, i - 1);
    quicksort(i + 1, high);
}

void QuickSort::print() {
    for (int num : arr) {
        savefile << num << endl;
    }
    cout <<"Quick Sort Ran" << endl;
}
