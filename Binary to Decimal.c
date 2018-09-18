#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=0,c=1,r;
	
	printf("Enter a binary number:");
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		b+=r*c;
		c*=2;
		a/=10;
	}
	 printf("Equivalent decimal value=%d",b);
	 getch();
}
