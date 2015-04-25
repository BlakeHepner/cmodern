#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Error! %s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while((ch = getc(fp)) != EOF) {
        if (isalpha(ch)) {
            putc(toupper(ch), stdout);
        } else {
            putc(ch, stdout);
        }
    }
}
