#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello";
	char str2[]="hello";
	
	int x = strcasecmp(str1, str2);
	printf("Result = %d", x);
}