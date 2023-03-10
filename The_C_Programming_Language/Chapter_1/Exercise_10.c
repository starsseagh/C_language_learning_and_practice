/* 
 * Write a program to copy its input to its output, 
 * replacing each tab by \t , each backspace by \b , 
 * and each backslash by \\ . This makes tabs and 
 * backspaces visible in an unambiguous way.
 */

#include <stdio.h>

#define ESC_CHAR '\\'

int main(void)
{
  int c;

  while((c = getchar()) != EOF)
  {
    switch(c)
    {
      case '\b':
        /* The OS on which I tested this (NT) intercepts \b characters. */
        putchar(ESC_CHAR);
        putchar('b');
        break;
      case '\t':
        putchar(ESC_CHAR);
        putchar('t');
        break;
      case ESC_CHAR:
        putchar(ESC_CHAR);
        putchar(ESC_CHAR);
        break;
      default:
        putchar(c);
        break;
    }
  }
  return 0;
}