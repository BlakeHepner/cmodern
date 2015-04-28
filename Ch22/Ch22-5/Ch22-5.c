/* Performs XOR encryption */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
    int orig_char, new_char;
    FILE *origfp, *encfp;

    if (argc != 3) {
        printf("Usage: %s sourcefile encryptedfile", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((origfp = fopen(argv[1], "rb")) == NULL) {
        printf("Error! %s cannot be read!", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((encfp = fopen(argv[2], "wb")) == NULL) {
        printf("Error! Cannot write to %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while((orig_char = getc(origfp)) != EOF) {
        new_char = orig_char ^ KEY;
        putc(new_char, encfp);
    }

    return 0;
}
