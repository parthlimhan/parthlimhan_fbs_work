#include <stdio.h>
void main()
{
    int num, choice, i, rev = 0, rem, sum = 0, flag = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMENU");
    printf("\n1. Check Even or Odd");
    printf("\n2. Check Prime or Not");
    printf("\n3. Check Palindrome or Not");
    printf("\n4. Check Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
                printf("%d is Even", num);
            else
                printf("%d is Odd", num);
            break;

        case 2:
            if(num <= 1)
                flag = 0;
            else
            {
                for(i = 2; i < num; i++)
                {
                    if(num % i == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }

            if(flag == 1)
                printf("%d is Prime", num);
            else
                printf("%d is Not Prime", num);
            break;

        case 3:
            temp = num;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if(rev == num)
                printf("%d is Palindrome", num);
            else
                printf("%d is Not Palindrome", num);
            break;

        case 4:
            if(num > 0)
                printf("Positive Number");
            else if(num < 0)
                printf("Negative Number");
            else
                printf("Zero");
            break;

        case 5:
            temp = num;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", rev);
            break;

        case 6:
            temp = num;
            sum = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum of Digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }
}