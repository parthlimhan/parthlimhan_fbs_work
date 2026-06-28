#include <stdio.h>
int factorial()
{
    int x = 5, i = 1, fact = 1;

    while (i <= x)
    {
        fact = fact * i;
        i++;
    }

    return fact;
}

void main()
{
    int result;

    result = factorial();

    printf("Factorial = %d", result);
}