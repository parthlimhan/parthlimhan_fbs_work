#include <stdio.h>

int sumDigits()
{
    int n = 1234, first, last, temp;

    temp = n;
    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    return first + last;
}

void main()
{
    int result;

    result = sumDigits();

    printf("Sum = %d", result);
}