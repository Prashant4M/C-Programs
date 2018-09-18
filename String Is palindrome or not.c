#include<stdio.h>
#include<string.h>
void main()
{
	char str1[30];
	int i;
	char str3[30];
	printf("Enter the string to check whether it is palindrome or not:");
	gets(str1);
	strcpy(str3,str1);
	i=strcmp(str1,strrev(str3));
	if(i==0)
	{
		printf("String is palindrome.");
	}
	else
	{
		printf("String is not palinrome.");
	}
	
}
