#include <stdio.h>

/* invert: inverts the bits of x that begin at position p */
unsigned invert(unsigned x, int p, int n)
{
    return x ^ (~(~0 << n) << (p + 1 -n));
}

main()
{
    unsigned x = 0x2FC;                 /* 1011111100 */
    int p = 4;
    int n = 2;

    printf("%x\n", invert(x, p, n));
}
