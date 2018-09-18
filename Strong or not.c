#include<stdio.h>
void main()
{
	int sumoffac=0,n,fac=1,i,x,a;
	printf("Enter the number to check whether it is strong or not:");
	scanf("%d",&n);
	i=n;
	while(n)
	{   fac=1;
		x=n%10;
		for(a=1;a<=x;a++)
		{
			fac*=a;
		}
		sumoffac+=fac;
		n/=10;
	}
	if(sumoffac==i)
		printf("Number is strong");
	else
		printf("Number is not strong because factorial of its digits is %d.",sumoffac);
}
