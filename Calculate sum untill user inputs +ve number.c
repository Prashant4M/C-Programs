#include<stdio.h>
void main()
{
	int i,sum=0,a[10];
	printf("Enter the numbers to get their sum:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
		{
			break;
		}
		sum+=a[i];
	}
	printf("Sum of the numbers while negative number are skipped:%d",sum);
}
