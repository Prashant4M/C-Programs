#include<stdio.h>
#include<math.h>
int main()
{
	int num,n,i=0,j,k,orginal,sum,org1,a;
	printf("Enter the number till which you want to print armstrong numbers:");
	scanf("%d",&num);
	
	for(n=1000;n<=num;n++)
	{
		i=0;
	    org1=n;
		orginal=n;
      
		sum=0;
		while(orginal>0)
		{
			k=orginal%10;
			sum+=pow(k,4);
			orginal/=10;
			
		}
		if(sum==org1)
		{
		   printf("%d\n",org1);
	    }
  
    }
}
