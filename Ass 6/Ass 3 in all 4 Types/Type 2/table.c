#include<stdio.h>

void table(int x)
{
    int i = 1;

    while(i <= 10)
    {
        printf("%d ", x * i);
        i++;
    }
}

void main()
{
    table(5);
}