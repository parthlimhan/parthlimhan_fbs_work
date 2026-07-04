#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="HelloWorld!";
	char accept[]="aeiou";
	
	char *ptr = strpbrk(str, accept);
	
	if(ptr)
	printf("First vowel found : %c", *ptr);
}