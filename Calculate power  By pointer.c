#include<stdio.h>
#include<math.h>
float power(float *a,int *b);
int main()
{
	float x,y;
	int z;
	printf("Enter the number:");
	scanf("%f",&x);
	printf("Enter the power:");
	scanf("%d",&z);
	y= power(&x,&z);
	printf("%f",y);
}
float power(float *a,int *b)
{
	float c;
	c=pow(*a,*b);
	return (c);
}
 
