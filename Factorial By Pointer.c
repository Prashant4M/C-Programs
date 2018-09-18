#include<stdio.h>
int factorial(int *n);
int main()
{
	int a,b;
	printf("Enter the number of which you want to calculate factorial:");
	scanf("%d",&a);
	b=factorial(&a);
	printf("Factorial of %d is=%d",a,b);
}
int factorial(int *n)
{
	int i,j=1;
	for(i=2;i<=*n;i++)
	{
		j*=i;
	}
	return(j);
}
