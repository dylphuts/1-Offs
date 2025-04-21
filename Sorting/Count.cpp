#include "Count.h"
#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

Counting::Counting(const vector<int>& data)
    : arr(data), savefile("Counting_Sort.txt") {}

void Counting::sort() {
    auto start = high_resolution_clock::now();

    if (arr.empty()) return;

    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());
    int range = maxVal - minVal + 1;

    vector<int> count(range, 0);
    vector<int> output(arr.size());

    for (int num : arr)
        count[num - minVal]++;

    for (int i = 1; i < range; ++i)
        count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; --i) {
        output[count[arr[i] - minVal] - 1] = arr[i];
        count[arr[i] - minVal]--;
    }

    arr = output;

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Counting Sort Ran in " << duration.count() << " milliseconds" << endl;
}

void Counting::print() {
    for (int num : arr) {
        savefile << num << endl;
    }
}
