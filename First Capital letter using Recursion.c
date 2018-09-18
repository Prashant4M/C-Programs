#include<stdio.h>
void firstcapital(char *str);
void main()
{
	char str[299];
	printf("Enter the string:");
	gets(str);
	firstcapital(str);
}
void firstcapital(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
	  if(str[i]>='A'&&str[i]<='Z')
	  {
	  	printf("First Capital letter is %c",str[i]);
	  }
	  else
	  {
	  	firstcapital(str[i]);
	  }
    }
}
