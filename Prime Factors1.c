#include<stdio.h>
int main()
{
	int n,i,j,count,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Prime factors are:\n");
	for(i=1;i<=n;i++)
	{
		count=0;
		if(n%i==0)
		{
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
			if(count==2)
			{
			  printf("%d\n",i);
			  sum+=i;	
		    }
		}
	}
	printf("Sum of these factors:%d",sum);
	return 0;
}
