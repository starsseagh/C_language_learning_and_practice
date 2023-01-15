#include<stdio.h>
#define MAXLINE 1000    /* maximum input line length */

int get_line(void);
void copy(void);

int max;
char longest[MAXLINE], line[MAXLINE];

/*print longest input line; specialized version*/
int main()
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while((len = get_line()) > 0)
        if(len > max){
            max = len;
            copy();
        }
    if(max >0)  /*there was a line*/
        printf("%s", longest);
    return 0;
}

/*getline: specialized version*/
int get_line(void)
{
    int c, i;
    extern char line[];

    for(i = 0; i < MAXLINE - 1 
        && (c=getchar()) != EOF && c != '\n'; ++i)
            line[i] = c;
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/*copy: specialized version*/
void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;
}