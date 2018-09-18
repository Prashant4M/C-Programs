#include<stdio.h>
void main()
{
	int rows,i,j,number=1;
	printf("Enter the numbers of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",number);
			number++;
		}
		printf("\n");
	}
}
