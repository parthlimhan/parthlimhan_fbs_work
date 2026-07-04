#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="abcde1234";
	char accept[]="abcde";
	
	size_t len = strspn(str,accept);
	printf("Initial segment length of characters : %zu", len);
}