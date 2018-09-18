#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,sum=0;
    printf("Enter any number:");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        c=a%10;
        sum+=c;
        a/=10;
    }
    printf("Sum of the digits of %d =%d",b,sum);
    return 0;
}
