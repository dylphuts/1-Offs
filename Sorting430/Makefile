CC = g++
CFLAGS = -Wall -Wextra

main: main.o MergeSort.o QuickSort.o
	$(CC) $(CFLAGS) -o main main.o MergeSort.o QuickSort.o

main.o: main.cpp MergeSort.h
	$(CC) $(CFLAGS) -c main.cpp

MergeSort.o: MergeSort.cpp MergeSort.h
	$(CC) $(CFLAGS) -c MergeSort.cpp

QuickSort.o: QuickSort.cpp QuickSort.h
	$(CC) $(CFLAGS) -c QuickSort.cpp

clean:
	rm -f main *.o *~ testData.txt
