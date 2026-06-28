#include <stdio.h>

void evenOdd(int *a)
{
    if (*a % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}

int main()
{
    int a;

    printf("Enter Number: ");
    scanf("%d", &a);

    evenOdd(&a);   

    return 0;
}