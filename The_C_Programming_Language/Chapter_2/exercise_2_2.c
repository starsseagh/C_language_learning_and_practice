#include <stdio.h>
#define MAXLINE 100

int main(int argc, char const *argv[])
{
    enum loop {NO, YES};
    enum loop okloop = YES;
    int i = 0, c;

    while (okloop == YES)
    {
        if (i < MAXLINE - 1)
            okloop = NO;
        else if (c = getchar() != '\n')
            okloop = NO;
        else if (c != EOF)
            okloop = NO;
        else
            i++;
    }
    
    return 0;
}
