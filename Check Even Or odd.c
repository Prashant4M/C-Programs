#include<stdio.h>
void Check(int a);
void main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	Check(x);
}
void Check(int a)
{
  if(a%2==0)
  {
  	printf("Number is even.");
  }
  else
  {
  	printf("Number is odd.");
  }
	
}
