/* Write a program to remove all trailing blanks and tabs 
from each line of input, and to delete entirely blank lines. */

#include <stdio.h>

#define MAXLINE 1000

int mygetline(char str[], int lim);

int main(void)
{
    int len;
    char line[MAXLINE];
    while ((len = mygetline(line, MAXLINE)) > 0)
        if (len > 1)
            printf("%s", line);
    return 0;
}

int mygetline(char str[], int lim)
{
    int c, i, j;
    i = j = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (j < lim)
            str[j++] = c;
        if (c != ' ' && c != '\t')
            i = j;
    }
    if (c == '\n' && i++ < lim)
        str[i - 1] = '\n';
    str[(i < lim) ? i : lim - 1] = '\0';
    return i;
}