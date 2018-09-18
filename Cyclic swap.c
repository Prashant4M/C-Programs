#include<stdio.h>
void cyclicswap(int *a,int *b,int *c);
void main()
{
	int x,y,z;
	printf("Enter the numbers to be swaped in cyclic order:");
	scanf("%d%d%d",&x,&y,&z);
	printf("Numbers before cyclic swaping:\n");
	printf("x=%d\ny=%d\nz=%d",x,y,z);
	cyclicswap(&x,&y,&z);
	printf("\nValues after swaping:\n");
	printf("x=%d\ny=%d\nz=%d",x,y,z);
}
void cyclicswap(int *a,int *b,int *c)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=*c;
	*c=temp;
}
