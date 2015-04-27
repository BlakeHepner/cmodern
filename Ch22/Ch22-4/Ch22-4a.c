#include <stdio.h>

int main(int argc, char *argv[])
{
    int charcount = 0;
    FILE *fp;

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Error! Unable to open %s", argv[1]);
        return 1;
    }

    while(getc(fp) != EOF) {
        charcount++;
    }
    fclose(fp);
    printf("Character count (including whitespace): %d\n", charcount);
    return 0;
}
