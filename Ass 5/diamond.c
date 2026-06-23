#include <stdio.h>
void main() 
{
    int n = 4;

    // Upper half
    for(int i = 1; i <= n; i++) 
	{
        for(int s = 1; s <= n - i; s++)
            printf(" ");

        for(int j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    // Lower half
    for(int i = n - 1; i >= 1; i--) 
	{
        for(int s = 1; s <= n - i; s++)
            printf(" ");

        for(int j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }
}