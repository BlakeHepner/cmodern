inventory: inventory.o readline.o quicksort.o
	clang -o inventory inventory.o readline.o quicksort.o

inventory.o: inventory.c readline.h quicksort.h
	clang -c inventory.c

readline.o: readline.c readline.h
	clang -c readline.c

quicksort.o: quicksort.c quicksort.h
	clang -c quicksort.c