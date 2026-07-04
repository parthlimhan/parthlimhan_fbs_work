#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="HelloWorld!";
	
	char *ptr = strrchr(str,'o');
	if(*ptr)
	printf("Last Occurrence of 'o' : %s", ptr);
}