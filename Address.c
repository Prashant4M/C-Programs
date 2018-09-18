#include<stdio.h>
void main()
{
	int i,*p;
	printf("Enter the number:");
	scanf("%d",&i);
	p=&i;
	*p=i;
	printf("Address of %d=%u\n",i,p);
	printf("Value of i=%d",*p);
}
