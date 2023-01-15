#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 10, 20, ..., 100; */
void main()
{
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;
    celsius = lower;

    printf("%s %s\n", "celsius", "fahr");
    while (celsius <= 100)
    {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%6.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
}