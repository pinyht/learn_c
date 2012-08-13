#include <stdio.h>

/* copy input to output; 1nd version */
main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
