#include<stdio.h>
void main()
{
	int num,n,sum=0,i,j;
	printf("Enter the number till which you want to print perfect numbers:");
	scanf("%d",&num);
	for(n=1;n<=num;n++)
	{ 
	  sum=0;
	  for(i=1;i<n;i++)
	  {
		if(n%i==0)
		{
			sum+=i;
		}
      }
	   if(sum==n)
	    	printf("%d\n",n);
      
    }
}
