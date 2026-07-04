#include<stdio.h>
#include<string.h>
void main()
{
	char dest[10];
	char src[10];
	
	printf("Enter string 1 :");
	scanf("%s", dest);
	printf("Enter string 2 :");
	scanf("%s", src);
	
	strncat(dest, src, 3);
	printf("Concatenated String : %s", dest);
}