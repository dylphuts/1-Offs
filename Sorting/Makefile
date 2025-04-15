CC= g++

CFLAGS= -Wall -Wextra

Target= Algorithms

all: $(Target)

$(Target):main.o Bubble.o
	$(CC) $(CFLAGS) -o $(Target) main.o Bubble.o

bubble.o: montyHall.cpp Bubble.h
	$(CC) $(CFLAGS) -c Bubble.cpp

main.o: main.cpp Bubble.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) $(Target) *.o *~
