#include <stdio.h>

/* rightrot: rotate x to the right by n positions */
unsigned rightrot(unsigned x, int n)
{
    int wordlength(void);
    int rbit;                   /* rightmost bit */

    while (n-- > 0) {
        rbit = (x & 1) << (wordlength() - 1);
        x = x >> 1;             /* shift x 1 position right */
        x = x | rbit;           /* complete one rotation */
    }
    return x;
}

/* wordlength: computers word length of the machine */
int wordlength(void)
{
    int i;
    unsigned v = (unsigned) ~0;

    for (i = 1; (v = v >> 1) > 0; i++)
        ;
    return i;
}

main()
{
    unsigned x = 0x2C7;         /* 1011000111 */
    int n = 3;

    printf("%x\n", rightrot(x, n));
}
