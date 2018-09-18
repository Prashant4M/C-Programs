#include<stdio.h>
void main()
{
	int c=0,v=0;
	char str[100],*p;
	printf("Enter the string:");
	gets(str);
	p=str;
	while(*p!='\0')
	{
		if(*p=='a'||*p=='A'||*p=='e'||*p=='E'||*p=='i'||*p=='I'||*p=='o'||*p=='O'||*p=='u'||*p=='U')
		{
			v++;
		}
		else
		{
			c++;
		}
		p++;
	}
	printf("Number of constants=%d\n ",c);
	printf("Number of vowels=%d",v);
}
