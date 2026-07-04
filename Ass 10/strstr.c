#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="HelloWorld!";
	
	char *ptr = strstr(str,"World");
	if(*ptr)
	printf("Substring Found : %s", ptr);
}