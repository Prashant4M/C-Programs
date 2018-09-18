#include<stdio.h>
void main()
{
	char str[300],c;
	printf("Enter the string:");
	gets(str);
	int i=0;
	for(;str[i]!='\0';i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
		{
			c=str[i];
		}
	}
	printf("First capital letter is %c.",c);
}
