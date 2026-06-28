#include <stdio.h>

void sum()
{
    int x = 1, y = 5, total = 0;

    while(x <= y)
    {
        total = total + x;
        x++;
    }

    printf("Sum = %d", total);
}

void main()
{
    sum();
}