#include <stdio.h>

int main(int argc, char *argv[])
{
    int linecount = 0;
    FILE *fp;
    int ch; //stores characters

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Error! Unable to open %s", argv[1]);
        return 1;
    }

    while((ch = getc(fp)) != EOF) {
        if (ch == '\n') {
            linecount++;
        }
    }
    fclose(fp);
    printf("Line count: %d\n", linecount);
    return 0;
}
