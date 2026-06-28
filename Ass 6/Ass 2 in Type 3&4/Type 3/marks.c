#include <stdio.h>
int checkResult()
{
    int mks;

    printf("Enter marks: ");
    scanf("%d", &mks);

    if (mks >= 75)
        return 1;
    else if (mks >= 65)
        return 2;
    else if (mks >= 55)
        return 3;
    else if (mks >= 40)
        return 4;
    else
        return 5;
}

void main()
{
    int result;

    result = checkResult();

    if (result == 1)
        printf("Result : Distinction");
    else if (result == 2)
        printf("Result : First Class");
    else if (result == 3)
        printf("Result : Second Class");
    else if (result == 4)
        printf("Result : Pass");
    else
        printf("Result : Fail");
}