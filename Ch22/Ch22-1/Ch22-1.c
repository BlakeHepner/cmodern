/* Checks whether a file can be opened for reading */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    if (argc == 1) {
        printf("usage: canopen filename\n");
        exit(EXIT_FAILURE);
    }
    
    for(int i = 1; i <= argc; i++) {
    
    if ((fp = fopen(argv[i], "r")) == NULL) {
        printf("%s can't be opened\n", argv[i]);
        exit(EXIT_FAILURE);
    }

    printf("%s can be opened\n", argv[i]);
    fclose(fp);
    }
    return 0;
}
