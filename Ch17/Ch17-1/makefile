inventory: inventory.o readline.o
	clang -o inventory inventory.o readline.o

inventory.o: inventory.c readline.h
	clang -c inventory.c

readline.o: readline.c readline.h
	clang -c readline.c
