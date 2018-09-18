#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100],*p,*q;
	int i,j=0;
	printf("Enter first string:");
	gets(str);
	printf("Enter second string:");
	gets(str1);
    i=strlen(str);
    q=str;
    p=str1;
	while(*p!='\0')
	{
		q[i++]=*p++;
	}
	q[i++]='\0';
	printf("%s",str);
 return 0;
}
