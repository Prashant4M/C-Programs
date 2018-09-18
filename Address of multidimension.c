 #include<stdio.h>
void main()
{
	int i,j;
	int a[3][3];
	int *p;
	printf("Enter elements of array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		p=&a[i][j];
	    *p=a[i][j];
	    printf("Address of %d=%u\t",a[i][j],p);
	    printf("Value of element=%d\n",*p);
	    }
	}
	printf("\n");
}
