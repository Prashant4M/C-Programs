#include<stdio.h>
void main()
{
	int i;
	printf("Numbers from 10 to 15 while loops runs from 1 to 20:\n");
	for(i=1;i<=20;i++)
	{
		if(i<10||i>15)
		{
			continue;
		}
		printf("%d\n",i);
	}
}
