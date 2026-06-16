#include<stdio.h>

int main()
{
    int s;

    printf("Enter age: ");
    scanf("%d", &s);

    if(s <= 12)
        printf("The person is a Child");
    else if(s <= 19)
        printf("The person is a Teenager");
    else if(s <= 59)
        printf("The person is an Adult");
    else
        printf("The person is a Senior Citizen");
}