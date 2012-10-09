#include <stdio.h>

main()
{
    enum loop {NO, YES};
    enum loop okay = YES;
    int i = 0;
    int lim = 10;
    char s[100];
    char c;

    while (okay == YES) {
        if (i > lim - 1)
            okay = NO;
        else if ((c = getchar()) == '\n')
            okay = NO;
        else if (c == EOF)
            okay = NO;
        else {
            s[i] = c;
            ++i;
        }
    }

    printf("%s\n", s);
}
