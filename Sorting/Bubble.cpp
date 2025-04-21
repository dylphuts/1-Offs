#include "Bubble.h"
#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

Bubble::Bubble(const vector<int>& data)
    : arr(data), savefile("Bubble_Sort.txt") {}

void Bubble::sort() {
  auto start = high_resolution_clock::now();
  
  int n = arr.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
	swap(arr[j], arr[j + 1]);
      }
    }
  }
   auto end = high_resolution_clock::now(); // End time
   auto duration = duration_cast<milliseconds>(end - start);
   cout << "Bubble Sort Ran in " << duration.count() << " milliseconds" << endl;
}

void Bubble::print() {
    for (int num : arr) {
        savefile << num << endl;
    }
}
