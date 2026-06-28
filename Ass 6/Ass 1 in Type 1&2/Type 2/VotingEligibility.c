#include<stdio.h>
void vote(int age)
{
    if(age>=18)
        printf("Eligible to Vote");
    else
        printf("Not Eligible to Vote");
}

void main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    vote(age);
}