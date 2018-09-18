#include<stdio.h>
void main()
{
	int x=18;
	int *p;
	p=&x;
	printf("Value before changing=%d\n",x);
	*p=20;
	printf("Value after changing=%d",x);
	
}
