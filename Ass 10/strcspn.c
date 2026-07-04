#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="abcde1234";
	char reject[]="1234";
	
	size_t len = strcspn(str,reject);
	printf("Initial segment length of characters : %zu", len);
}