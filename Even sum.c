#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0;
    printf("Enter the  number till which you  want to get sum of even numbers\n");
    scanf("%d",&a);
    for(b=2;b<=a;b=b+2)
    {
        sum=sum+b;
    }
    printf("\n Sum of even numbers till %d=%d",a,sum);
    return 0;
}
