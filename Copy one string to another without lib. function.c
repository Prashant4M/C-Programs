#include<stdio.h>
void main()
{
    char str[100],str1[100];
    int i;
	printf("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}	
	str1[i]='\0';
    printf("String after being copeid:%s",str1);
}
