#include <stdio.h>
int checkDivisibility(int a)
{
    if (a % 3 == 0 && a % 5 == 0)
        return 1;
    else if (a % 3 == 0 && a % 5 != 0)
        return 2;
    else if (a % 3 != 0 && a % 5 == 0)
        return 3;
    else
        return 4;
}

void main()
{
    int a, result;

    printf("Enter Number: ");
    scanf("%d", &a);

    result = checkDivisibility(a);

    if (result == 1)
        printf("Number is divisible by 3 and 5");
    else if (result == 2)
        printf("Number is divisible by 3 but not by 5");
    else if (result == 3)
        printf("Number is divisible by 5 but not by 3");
    else
        printf("Number is neither divisible by 3 nor by 5");
}