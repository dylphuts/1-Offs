CC= g++

CFLAGS= -Wall -Wextra

Target= paradox

all: $(Target)

$(Target):main.o montyHall.o
	$(CC) $(CFLAGS) -o $(Target) main.o montyHall.o

montyHall.o: montyHall.cpp montyHall.h
	$(CC) $(CFLAGS) -c montyHall.cpp

main.o: main.cpp montyHall.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) $(Target) *.o *~
