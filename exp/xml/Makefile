CFLAGS=-Wall -Wpedantic -std=c11
LFLAGS=-lmxml

all: code

code: code.c
	gcc $(CFLAGS) $< -o $@ $(LFLAGS)

clean:
	rm -rf *.o code
