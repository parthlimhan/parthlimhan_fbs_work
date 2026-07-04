#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10]="Hello";
	char str2[10]="Helium";
	
	int x = strncmp(str1, str2, 3);
	
	printf("Result : %d", x);
}