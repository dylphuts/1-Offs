#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Bubble.h"
#include "Quick.h"
#include "Merge.h"
#include "Insertion.h"
#include "Count.h"
#include <vector>
using namespace std;

void generateNumbers(string name);

int main() {

  string fileName = "TestData";
  generateNumbers(fileName);

  //make sure valid file location
  vector<int> arr;
  ifstream file(fileName + ".txt");
  if (!file.is_open()) {
      cerr << "Failed to open file!" << endl;
      return 1;
  }

  int num;
  while (file >> num) {
      arr.push_back(num);
  }
  Bubble BubRun(arr);
  QuickSort QuickRun(arr);
  MergeSort MergeRun(arr);
  InsertionSort InsertRun(arr);
  Counting countRun(arr);
  
  BubRun.sort();
  BubRun.print();
  QuickRun.sort();
  QuickRun.print();
  MergeRun.sort();
  MergeRun.print();
  InsertRun.sort();
  InsertRun.print();
  countRun.sort();
  countRun.print();
  return 0;
}

void generateNumbers(string name){
  ofstream file(name + ".txt");
  int size = 10000;
  for(int i = 0; i<size; i++){
    int number = rand() % 1001;
    file<<number<<endl;
  }
}
