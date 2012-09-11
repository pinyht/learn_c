#include <stdio.h>

#define MAXLINE 1000                        /* maximum input line size */

int mygetline(char line[], int maxline);
int myremove(char s[]);

/* remove trailing blanks and tabs, and delete blank lines */
main()
{
    char line[MAXLINE];                     /* current input line */

    while (mygetline(line, MAXLINE) > 0)
        if (myremove(line) > 0)
            printf("%s", line);
    return 0;
}

/* remove trailing blanks and tabs from character string s */
int myremove(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\n')                    /* find newline character */
        ++i;
    --i;                                    /* back off from '\n' */
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    if (i > 0) {                            /* is it a nonblank line? */
        ++i;
        s[i] = '\n';                        /* put newline character back */
        ++i;
        s[i] = '\0';                        /* terminate the string */
    }
    return i;
}

/* mygetline: read a line into s, return length */
int mygetline(char s[], int lim)
{
    int c, i, j;

    j = 0;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
