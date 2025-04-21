CC = g++
CFLAGS = -Wall -Wextra
Target = Algorithms

# Object files
OBJS = main.o Bubble.o Quick.o Merge.o Insertion.o

all: $(Target)

$(Target): $(OBJS)
	$(CC) $(CFLAGS) -o $(Target) $(OBJS)

Bubble.o: Bubble.cpp Bubble.h
	$(CC) $(CFLAGS) -c Bubble.cpp

Quick.o: Quick.cpp Quick.h
	$(CC) $(CFLAGS) -c Quick.cpp

Merge.o: Merge.cpp Merge.h
	$(CC) $(CFLAGS) -c Merge.cpp

Insertion.o: Insertion.cpp Insertion.h
	$(CC) $(CFLAGS) -c Insertion.cpp

main.o: main.cpp Bubble.h Quick.h Merge.h Insertion.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f $(Target) *.o *~
