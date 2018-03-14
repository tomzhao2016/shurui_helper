# This is shurui Makefile for problem1

#
CC = CC
CFLAGS = -O2 -DONLINE_JUDGE
LIBS = 

TARGETS = path_search

all:	$(TARGETS)

path_search: path_search.o
	$(CC) -o $@ $(LIBS) path_search.o

path_search.o: path_search.cpp path_search.h
	$(CC) -c $(CFLAGS) path_search.cpp

clean:
	rm -f *.o $(TARGETS) 
