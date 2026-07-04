#include<stdio.h>
#include<string.h>
void main()
{
	char dest[10];
	char src[10];
	
	printf("Enter String 1 :");
	scanf("%s", dest);
	printf("Enter String 2 :");
	scanf("%s", src);
	
	strcat(dest, src);
	printf("Concatenated string : %s", dest);
}