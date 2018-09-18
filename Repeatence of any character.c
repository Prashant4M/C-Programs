   #include<stdio.h>
#include<string.h>
int main()
{
	char str[50],c;
	int i,count=0;
	printf("Enter any sentence:");
	gets(str);
	printf("Enter the character to know its repetation in the sentence:");
	scanf("%c",&c);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==c)
		{
			count++;
		}
	}
	if(count==1)
	{
		printf("This character is appeared only for a single time throughout the sentence.");
	}
	else
	{
	  printf("Character %c is repeated %d times.",c,count);
    }
	return 0;
}
