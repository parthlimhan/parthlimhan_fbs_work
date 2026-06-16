#include<stdio.h>

int main()
{
    char ch;
    int a, discount, bill;

    printf("Are you a student? (Y/N): ");
    scanf(" %c", &ch);

    printf("Enter purchase amount: ");
    scanf("%d", &a);

    if((ch == 'Y' || ch == 'y') && a >= 500)
    {
        discount = a * 20 / 100;
        bill = a - discount;
        printf("Discount = %d\nBill = %d", discount, bill);
    }
    else if((ch == 'Y' || ch == 'y') && a < 500)
    {
        discount = a * 10 / 100;
        bill = a - discount;
        printf("Discount = %d\nBill = %d", discount, bill);
    }
    else if((ch == 'N' || ch == 'n') && a >= 600)
    {
        discount = a * 15 / 100;
        bill = a - discount;
        printf("Discount = %d\nBill = %d", discount, bill);
    }
    else
    {
        printf("Bill = %d", a);
    }
}