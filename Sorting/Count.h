#ifndef COUNTING_H
#define COUNTING_H

#include <vector>
#include <fstream>

class Counting {
private:
    std::vector<int> arr;
    std::ofstream savefile;

public:
    Counting(const std::vector<int>& data);
    void sort();
    void print();
};

#endif
