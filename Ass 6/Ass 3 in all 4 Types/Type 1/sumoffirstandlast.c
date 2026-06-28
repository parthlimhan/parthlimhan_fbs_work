#include <stdio.h>

void sumDigits()
{
    int n = 1234, first, last, temp;

    temp = n;
    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    printf("Sum = %d", first + last);
}

void main()
{
    sumDigits();
}