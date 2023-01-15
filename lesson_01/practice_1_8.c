# include <stdio.h>

void main()
{
    int c, sp, ta, nl;

    sp = 0;
    ta = 0;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++sp;
        if (c == '\t')
            ++ta;
        if (c == '\n')
            ++nl;
    }
    printf("%d\t%d\t%d", sp, ta, nl);
}