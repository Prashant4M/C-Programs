#include<stdio.h>
int main()
{
	int n,i,j,k,space,temp=1;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	space=n-1;
	for(i=1;i<=n;i++)
	{
		int start=2;
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(k=1;k<=temp;k++)
		{
			printf("%d",start);
			start+=2;
		}
		space--;
		temp+=2;
		printf("\n");
	}
	return 0;
}
