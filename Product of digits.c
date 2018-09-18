#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,product=1;
    printf("Enter any number:");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        c=a%10;
        product*=c;
        a/=10;
    }
    printf("Product of all digits of %d =%d",b,product);
    return 0;
}
