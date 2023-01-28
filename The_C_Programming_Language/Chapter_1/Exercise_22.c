/* Write a program to "fold" long input lines into two or more 
shorter lines after the last non-blank character that occurs 
before the n-th column of input. Make sure your program does 
something intelligent with very long lines, and if there are 
no blanks or tabs before the specified column. */

#include <stdio.h>

#define MAXLINE 1000 /* max input line size */
    
char line[MAXLINE]; /*current input line*/

int getline(void);  /* taken from the KnR book. */

int main()
{
  int t,len;
  int location,spaceholder;
  const int FOLDLENGTH=70; /* The max length of a line */

  while (( len = getline()) > 0 )
    {
      if( len < FOLDLENGTH )
	{
	}
      else
	{
	/* if this is an extra long line then we 
	** loop through it replacing a space nearest
	** to the foldarea with a newline.
	*/
	  t = 0;
	  location = 0;
	  while(t<len)
	    {
	      if(line[t] == ' ')
		spaceholder = t;

	      if(location==FOLDLENGTH)
		{
		  line[spaceholder] = '\n';
		  location = 0;
		}
	      location++;
	      t++;
	    }
	}
      printf ( "%s", line);
    }
  return 0;
}

/* getline: specialized version */
int getline(void)
{
  int c, i;
  extern char line[];
  
  for ( i=0;i<MAXLINE-1 && ( c=getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if(c == '\n') 
    {
      line[i] = c;
      ++i;
    }
  line[i] = '\0';
  return i;

}