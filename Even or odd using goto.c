#include<stdio.h>
void main()
{
	int i;
	printf("Enter the number to check whether it it is even or odd:");
	scanf("%d",&i);
	if(i%2==0)
	goto even;
	else
	goto odd;
	even:
		printf("Number is even.");
	odd:
		printf("Number is odd.");
}
