#include<stdio.h>
void main()
{
	char str[100],*p;
	printf("Enter  the  string:");
	gets(str);
	p=str; 
	while(*p!='\0')
	{
		printf("%c",*p);
		p++;
	}
	
}
