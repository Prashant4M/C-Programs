#include<stdio.h>
int sum(int a);
int main()
{
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	printf("Sum is=");
	y=sum(x);
	printf("%d",y);
}
int sum(int a)
{
	int b,s=0;
	for(b=2;b<=a;b+=2)
	{
		s+=b;
	}
	return(s);
	
}
