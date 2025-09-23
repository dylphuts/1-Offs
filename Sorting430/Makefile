CC = g++
CFLAGS = -Wall -Wextra

main: main.o MergeSort.o
	$(CC) $(CFLAGS) -o main main.o MergeSort.o

main.o: main.cpp MergeSort.h
	$(CC) $(CFLAGS) -c main.cpp

MergeSort.o: MergeSort.cpp MergeSort.h
	$(CC) $(CFLAGS) -c MergeSort.cpp

clean:
	rm -f main *.o *~ testData.txt
