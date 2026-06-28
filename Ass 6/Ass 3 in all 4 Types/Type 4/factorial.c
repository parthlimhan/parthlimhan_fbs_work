#include <stdio.h>
int factorial(int x)
{
    int i = 1, fact = 1;

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

    result = factorial(5);

    printf("Factorial = %d", result);
}