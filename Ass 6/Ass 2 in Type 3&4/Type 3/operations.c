#include <stdio.h>
int calculator()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Quotient = %d\n", a / b);
    printf("Multiplication = %d\n", a * b);
    printf("Remainder = %d\n", a % b);

    return 0;
}

void main()
{
    calculator();
}