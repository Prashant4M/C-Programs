#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c;
  double d;
  printf("Enter the number a=");
  scanf("%d",&a);
  printf("Enter the number b=");
  scanf("%d",&b);
  printf("Enter the operator(1=+,2=-,3=*,4=/) you want to use");
  scanf("%d",&c);
  if(c==1)
  {
      d=a+b;
      printf("Sum of the two numbers is=%d",d);
  }
  else if(c==2)
  {
      d=a-b;
      printf("Difirence b/w two numbers is=%d",d);
  }
  else if(c==3)
  {
      d=a*b;
      printf("Multiplication of two numbers is=%f",d);
  }
  else
  {
      d=a/b;
      printf("Division result is=%lf",d);
  }
}
