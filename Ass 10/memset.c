#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Hello";
	
	memset(str, '*', 3);
	printf("After memset : %s",str);
}