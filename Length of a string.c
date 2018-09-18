#include<stdio.h>
void main()
{
	int count=0;
	char str[100],*p;
	printf("Enter the string:");
	gets(str);
	p=str;
	while(*p!='\0')
	{
		count++;
		p++;
	}
	printf("Length of entered string is =%d",count);
}
