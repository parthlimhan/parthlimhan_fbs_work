#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="abc";
	char str2[]="abd";
	
	int x = memcmp(str1, str2, 3);
	printf("Result = %d", x);
}