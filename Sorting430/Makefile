CC = g++
CFLAGS = -Wall -Wextra

main: main.o
	$(CC) $(CFLAGS) -o main main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f main *.o *~ testData.txt