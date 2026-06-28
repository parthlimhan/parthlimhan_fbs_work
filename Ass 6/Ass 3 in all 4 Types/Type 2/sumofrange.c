#include <stdio.h>

void sum(int x, int y)
{
    int total = 0;

    while(x <= y)
    {
        total = total + x;
        x++;
    }

    printf("Sum = %d", total);
}

void main()
{
    sum(1, 5);
}