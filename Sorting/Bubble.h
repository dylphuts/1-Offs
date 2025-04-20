#ifndef BUBBLE_H
#define BUBBLE_H

#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Bubble {
private:
  vector<int> arr;
  ofstream savefile;
  
public:
    Bubble(const std::vector<int>& data); // Correct declaration
    void sort();                          // Optional: sort method
    void print();
};

#endif
