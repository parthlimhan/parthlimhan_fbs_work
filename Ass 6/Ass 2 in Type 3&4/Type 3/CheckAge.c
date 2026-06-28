#include <stdio.h>
int checkAge()
{
    int s;

    printf("Enter age: ");
    scanf("%d", &s);

    if (s <= 12)
        return 1;
    else if (s <= 19)
        return 2;
    else if (s <= 59)
        return 3;
    else
        return 4;
}

void main()
{
    int result;

    result = checkAge();

    if (result == 1)
        printf("The person is a Child");
    else if (result == 2)
        printf("The person is a Teenager");
    else if (result == 3)
        printf("The person is an Adult");
    else
        printf("The person is a Senior Citizen");
}