#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],str1[100];
	int i,len,j,k,l;
	printf("Enter the string:");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	len=i;
	j=0;
	k=len-1;
	while(k>=0)
	{
		str1[j]=str[k];
		j++;
		k--;
	}
	str1[j]='\0';
    l=strcmp(str1,str);
    if(l==0)
	{
		printf("String is palindrome.");
	}
	else
	{
		printf("String is not palindrome.");
	}
	
}
