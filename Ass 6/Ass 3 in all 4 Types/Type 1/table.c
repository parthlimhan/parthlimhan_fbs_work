#include<stdio.h>

void table()
{
    int x = 5, i = 1;

    while(i <= 10)
    {
        printf("%d ", x * i);
        i++;
    }
}

void main()
{
    table();
}