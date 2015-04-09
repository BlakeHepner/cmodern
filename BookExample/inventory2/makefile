inventory2: inventory2.o readline.o
	clang -o inventory2 inventory2.o readline.o

inventory2.o: inventory2.c readline.h
	clang -c inventory2.c

readline.o: readline.c readline.h
	clang -c readline.c
