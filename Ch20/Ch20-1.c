#include <stdio.h>

int main(void)
{
    struct floaty {
        unsigned int fraction:23;
        unsigned int exponent:8;
        unsigned int sign:1;
    };

    union united {
        float n;
        struct floaty f;
    };

    union united a;

    a.f.sign = 1;
    a.f.exponent = 128;
    a.f.fraction = 0;

    printf("%f\n", a.n);
    return 0;
}
