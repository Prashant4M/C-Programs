#include<stdio.h>
int sum(int a,int b);
int main()
{
	int x,y,z;
	printf("Enter the numbers:");
	scanf("%d%d",&x,&y);
	printf("Sum is=");
	z=sum(x,y);
	printf("%d",z);
}
int sum(int a,int b)
{
	int s;
	s=a+b;
	return(s);
	
}
