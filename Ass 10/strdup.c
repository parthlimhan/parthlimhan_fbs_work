#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[]="Hello";
	
	char *ptr = strdup(str);
	
	if(ptr)
	{
		printf("Original String : %s\n", str);
		printf("Duplicate String : %s", ptr);
		free(ptr);
	}
}