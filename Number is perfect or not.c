#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter the number to check whether it is perfect or not:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		printf("Entered number is perfect.");
	}
	else
	{
		printf("Enterd number is not perfect because the sum of divisors is %d.",sum);
	}
}
