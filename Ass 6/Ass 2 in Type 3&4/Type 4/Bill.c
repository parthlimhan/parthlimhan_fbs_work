#include <stdio.h>
int calculateBill(char ch, int a)
{
    int discount, bill;

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
    char ch;
    int a, bill;

    printf("Are you a student? (Y/N): ");
    scanf(" %c", &ch);

    printf("Enter purchase amount: ");
    scanf("%d", &a);

    bill = calculateBill(ch, a);

    printf("Bill = %d", bill);
}