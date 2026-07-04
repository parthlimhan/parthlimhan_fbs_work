#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10];
	char str2[10];
	
	printf("Enter string 1 :");
	scanf("%s", str1);
	printf("Enter string 2 :");
	scanf("%s", str2);
	
	printf("\n");
	
	printf("Returns 0 if both strings are equal\n");
	printf("Returns -1 if str1 is less than str2\n");
	printf("Returns 1 is str1 is greater than str2\n");
	
	printf("\n");
	
	char x = strcmp(str1, str2);
	printf("Result : %d\n", x);
}