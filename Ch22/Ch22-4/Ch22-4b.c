#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int wordcount = 0;
    FILE *fp;
    int ch;
    int insideword = 0;

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Error! Unable to open %s", argv[1]);
        return 1;
    }

    while((ch = getc(fp)) != EOF) {
        if (isspace(ch)) {
            insideword = 0;
        } else if (insideword == 0) {
        wordcount++;
        insideword=1;
        }
    }
    fclose(fp);
    printf("Word count: %d\n", wordcount);
    return 0;
}
