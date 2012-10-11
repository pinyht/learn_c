#include <stdio.h>

/* setbits: set  n bits of x at position p with bits of y */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return x & ~(~(~0 << n) << (p + 1 - n)) | 
        (y & ~(~0 << n)) << (p + 1 -n);
}

main()
{
    unsigned int x = 0x2AC;                 /* 1010101100 */
    unsigned int y = 0x3F;                  /* 111111 */

    printf("%x\n", setbits(x, 6, 4, y)); 
}
