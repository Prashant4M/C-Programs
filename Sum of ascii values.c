#include<stdio.h>
int  main()
{
	char str[100];
	int i,sum=0;
	printf("Enter the sentence:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c--->%d\n",str[i],str[i]);
		sum+=str[i];
	}
		printf("Sum of the Ascii Values=%d",sum); 
	return 0;
}
