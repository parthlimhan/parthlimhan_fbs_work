#include<stdio.h>
#include<string.h>

void main()
{
    char arr[] = "Apple,Banana,Mango";

    printf("%s\n", strtok(arr, ","));
    printf("%s\n", strtok(NULL, ","));
    printf("%s\n", strtok(NULL, ","));
}