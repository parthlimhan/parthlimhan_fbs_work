#include <stdio.h>
int calculateBill()
{
    char ch;
    int a, discount, bill;

    printf("Are you a student? (Y/N): ");
    scanf(" %c", &ch);

    printf("Enter purchase amount: ");
    scanf("%d", &a);

    if ((ch == 'Y' || ch == 'y') && a >= 500)
    {
        discount = a * 20 / 100;
        bill = a - discount;
        printf("Discount = %d\n", discount);
    }
    else if ((ch == 'Y' || ch == 'y') && a < 500)
    {
        discount = a * 10 / 100;
        bill = a - discount;
        printf("Discount = %d\n", discount);
    }
    else if ((ch == 'N' || ch == 'n') && a >= 600)
    {
        discount = a * 15 / 100;
        bill = a - discount;
        printf("Discount = %d\n", discount);
    }
    else
    {
        bill = a;
    }

    return bill;
}

void main()
{
    int bill;

    bill = calculateBill();

    printf("Bill = %d", bill);
}