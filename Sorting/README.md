Out of the 5 sorting algorithms this is the progression in terms of fastest to slowest.
Counting->Quick->Merge->Insertion->Bubble.
With a data set of 10,000 integers Counting sort was less than 0 milliseconds. Quick sort was around 2 milliseconds long. Merge sort was about 6 milliseconds long. Insertion sort was around 170 milliseconds. Lastly, Bubble sort was around 750 milliseconds.

These runtimes vary due to how man times an action is needed to sort the data. However, the later sorting algorithms have a big O of n^2 where the other algorithems have a worst and best case scenario that is significantly shorter than the previous algoritms average. 