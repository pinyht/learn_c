#include <stdio.h>

/* any: return first location in s1 where any char from s2 occurs */
int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])             /* match found ? */
                return i;                   /* location first match */
    return -1;                              /* otherwise, no match */
}

main()
{
    char s1[] = "abcde";
    char s2[] = "d";
    printf("%d\n", any(s1, s2));
}