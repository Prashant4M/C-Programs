#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b,sum=0;
    printf("Enter the  number till which you want to get sum of odd numbers\n");
    scanf("%d",&a);
    for(b=1;b<=a;b=b+2)
    {
        sum=sum+b;
    }
    printf("\n Sum of odd numbers till %d=%d",a,sum);
    return 0;
}
