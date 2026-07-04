#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="HelloWorld!";
	
	char *ptr = strchr(str,'o');
	if(*ptr)
	printf("First Occurrence of 'o' : %s", ptr);
}