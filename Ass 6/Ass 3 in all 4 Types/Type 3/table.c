#include<stdio.h>

int table()
{
    int x = 5, i = 1;

    while(i <= 10)
    {
        printf("%d ", x * i);
        i++;
    }

    return 0;
}

void main()
{
    table();
}