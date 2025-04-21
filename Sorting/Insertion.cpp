#include "Insertion.h"
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

InsertionSort::InsertionSort(const vector<int>& data)
  : arr(data), savefile("Insertion_Sort.txt") {}

void InsertionSort::sort() {
  auto start = high_resolution_clock::now();

  int n = arr.size();
  for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;
    // Move elements of arr[0..i-1] that are greater than key
    // to one position ahead of their current position
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
  auto end = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(end - start);
  cout << "Insertion Sort Ran in " << duration.count() << " milliseconds" << endl;
}
void InsertionSort::print() {
  for (int num : arr) {
    savefile << num << endl;
  }
}
