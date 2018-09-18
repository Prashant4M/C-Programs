#include<stdio.h>
void main()
{
	int i,j,a[i];
	int *s;
	printf("Enter the size of array:");
	scanf("%d",&i);
	printf("Enter elements of array:\n");
	for(j=0;j<i;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=0;j<i;j++)
	{
		s=&a[j];
	    *s=a[j];
	    printf("Address of %d=%u\t",a[j],s);
	    printf("Value of element=%d\n",*s);
	}
	printf("\n");
}
