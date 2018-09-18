#include<stdio.h>
int main()
{
	char str[100],str1[100];
	int i,j=0,c,n,temp;
	printf("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&& str[i]<='9')
		{
			str1[j]=str[i];
			j++;
		}
	}
	temp=atoi(str1);//converts string to integer
	printf("Numbers present in the string are %d\t",temp);
	while(temp>0)
    {
	  n=temp%10;
	  c=n*n;
	  printf("\nSquare of the number %d---->%d\n",n,c);
	  temp/=10;
	}
	
	
	return 0;	
}
