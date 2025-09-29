CC = g++
CFLAGS = -Wall -Wextra

main: main.o MergeSort.o QuickSort.o SelectionSortA.o SelectionSortB.o InsertionSort.o BubbleSortA.o BubbleSortB.o
	$(CC) $(CFLAGS) -o sortingAlgorithems main.o MergeSort.o QuickSort.o SelectionSortA.o SelectionSortB.o InsertionSort.o BubbleSortA.o BubbleSortB.o

main.o: main.cpp MergeSort.h
	$(CC) $(CFLAGS) -c main.cpp

MergeSort.o: MergeSort.cpp MergeSort.h
	$(CC) $(CFLAGS) -c MergeSort.cpp

QuickSort.o: QuickSort.cpp QuickSort.h
	$(CC) $(CFLAGS) -c QuickSort.cpp

SelectionSortA.o: SelectionSortA.cpp SelectionSortA.h
	$(CC) $(CFLAGS) -c SelectionSortA.cpp

SelectionSortB.o: SelectionSortB.cpp SelectionSortB.h
	$(CC) $(CFLAGS) -c SelectionSortB.cpp

InsertionSort.o: InsertionSort.cpp InsertionSort.h
	$(CC) $(CFLAGS) -c InsertionSort.cpp

BubbleSortA.o: BubbleSortA.cpp BubbleSortA.h
	$(CC) $(CFLAGS) -c BubbleSortA.cpp

BubbleSortB.o: BubbleSortB.cpp BubbleSortB.h
	$(CC) $(CFLAGS) -c BubbleSortB.cpp

clean:
	rm -f main *.o *~ testData.txt sortingAlgorithems
