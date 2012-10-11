#include <stdio.h>

/* bitcount: count 1 bits in x - faster version */
int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x &= x - 1)
        ++b;
    return b;
}

main()
{
    unsigned s;
    s = 0x29B;              /* 1010011011 */
    printf("num of 1:\n%d\n", bitcount(s));
}
