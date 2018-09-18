#include <stdio.h>
#include <stdlib.h>
 main()
{
    int a,b,c;
    printf("Enter the one side of the triangle a=");
    scanf("%d",&a);
    printf("Enter the second side of the triangle b=");
    scanf("%d",&b);
    printf("Enter the third side of the triangle c=");
    scanf("%d",&c);
    if(  a==b==c)
     {
      printf("Triangle is possible & will be equilateral");
     }
    else if(a==b||b==c||c==a)
    {
        printf("Triangle is possible & will be isosceles");
    }
    else
    {
        printf("Trinangle is possible & will be scalene");
    }
}
