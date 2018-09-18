#include<stdio.h>
void main()
{
	int sumoffac=0,n,fac=1,i,x,a,num;
	printf("Enter the number till which you want to print strong numbers:");
	scanf("%d",&num );

	for(n=1;n<=num;n++)
	{
	   i=n;
	   sumoffac=0;
	   fac=1;
	   while(i)
	   {   
	     fac=1;
		 x=i%10;
		 for(a=1;a<=x;a++)
		 {
			fac*=a;
		 }
		 sumoffac+=fac;
		 i/=10;
	   }
	   if(sumoffac==n)
	     printf("%d\n",n);
    }
}
