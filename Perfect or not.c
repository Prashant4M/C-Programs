#include<stdio.h>
void main()
{
	int n,sum=0,i,j;
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
		printf("Number is perfect.");
	else
		printf("Number is not perfect because sum of its factors is %d.",sum);	
}
