remind: remind.o readline.o
	clang -o remind remind.o readline.o

remind.o: remind.c readline.h
	clang -c remind.c

readline.o: readline.c readline.h
	clang -c readline.c
