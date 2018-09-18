#include<stdio.h>
void main()
{
	char str[200];
	printf("Enter the string:");
	gets(str);
	strlwr(str);
	printf("After converting string to lowercase,the string is :%s",str);
}
