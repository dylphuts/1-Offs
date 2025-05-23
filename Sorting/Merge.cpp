#include "Merge.h"
#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

MergeSort::MergeSort(const std::vector<int>& data)
    : arr(data), savefile("Merge_Sort.txt") {}

void MergeSort::sort() {
  auto start = high_resolution_clock::now();
  mergeSort(0, arr.size() - 1);
  auto end = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(end - start);
  std::cout << "Merge Sort Ran in " << duration.count() << " milliseconds" << std::endl;
}

void MergeSort::mergeSort(int left, int right) {
  if (left >= right) return;
  int mid = left + (right - left) / 2;
  mergeSort(left, mid);
  mergeSort(mid + 1, right);
  merge(left, mid, right);
}

void MergeSort::merge(int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;
  std::vector<int> leftArr(n1), rightArr(n2);
  for (int i = 0; i < n1; ++i) leftArr[i] = arr[left + i];
  for (int i = 0; i < n2; ++i) rightArr[i] = arr[mid + 1 + i];
  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      ++i;
    } else {
      arr[k] = rightArr[j];
      ++j;
    }
    ++k;
  }
  while (i < n1) {
    arr[k] = leftArr[i];
    ++i;
    ++k;
  }
  while (j < n2) {
    arr[k] = rightArr[j];
    ++j;
    ++k;
  }
}

void MergeSort::print() {

  for (int num : arr) {

    savefile << num << endl;

  }

}
