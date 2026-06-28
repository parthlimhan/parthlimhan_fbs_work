#include <stdio.h>
void factorial()
{
    int x = 5, i = 1, fact = 1;

    while (i <= x)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial = %d", fact);
}

void main()
{
    factorial();
}