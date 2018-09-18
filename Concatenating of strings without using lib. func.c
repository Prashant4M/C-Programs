#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],str1[100];
	int i,j=0;
	printf("Enter first string:");
	gets(str);
	printf("Enter second string:");
	gets(str1);
    i=strlen(str);
	for(j=0;str1[j]!='\0';i++,j++)
	{
		str[i]=str1[j];
	}
	str[i]='\0';
	printf("%s",str);
}
