#include <vector>
#include "Quicksort.h"
#include <iostream>

using namespace std;

QuickSort::QuickSort(const vector<int> &data)
{
    array = data;
}

void QuickSort::sort()
{
    if (!array.empty())
        quickSort(0, array.size() - 1);
}

void QuickSort::quickSort(int start, int end)
{
    if (start < end)
    {
        int index = partition(start, end);
        quickSort(start, index - 1);
        quickSort(index + 1, end);
    }
}

int QuickSort::partition(int start, int end)
{
    int pivot = array[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    int temp = array[i + 1];
    array[i + 1] = array[end];
    array[end] = temp;
    return i + 1;
}

void QuickSort::print()
{
    cout << "Printing Quick Results"<<endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++)
    {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
}
