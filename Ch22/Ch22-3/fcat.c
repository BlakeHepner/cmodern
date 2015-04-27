#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch; //character

    for(int i = 1; i < argc; i++) {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "Error! %s can't be read!\n", argv[i]);
            continue;
        }

        while((ch = getc(fp)) != EOF) {
            putc(ch, stdout);
        }
        fclose(fp);
    }
    return 0;
}
