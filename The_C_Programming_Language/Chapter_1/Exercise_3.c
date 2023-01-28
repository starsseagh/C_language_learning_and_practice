/*
 * Modify the temperature conversion program to print a heading
 * above the table.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit */
  step = 20;      /* step size */

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
  /* changing the printing format */
    printf("%3.0f\t%3.1f\n", fahr, celsius);
  /* this piece of code has been changed as well */
    fahr += step;
  }
  printf("Fahr\tCelsius\n");

  return 0;
}