#ifndef BUBBLE_H
#define BUBBLE_H

#include <vector>

class Bubble {
private:
    std::vector<int> arr;

public:
    Bubble(const std::vector<int>& data); // Correct declaration
    void sort();                          // Optional: sort method
    void print() const;                   // Optional: print method
};

#endif
