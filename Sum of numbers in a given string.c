#include<stdio.h>
void main()
{
	char str[100],c;
	int i,j=0;
	printf("Enter the string:");
	gets(str);
	printf("Enter the word to remove from the string:");
	scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
			for(j=i;str[j]!='\0';j++)
			{
				str[j]=str[j+1];
			}
		    str[j]='\0';
		}
	}
   
    puts(str);
}
