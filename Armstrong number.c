#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,sum=0;
    printf("Enter any  number:");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        c=a%10;
        sum=sum+c*c*c;
        a/=10;
    }
    if(sum==b)
    {
        printf("The entered number %d is an armstrong number",b);
    }
    else
    {
        printf("The entered number is not armstrong  number because the number is %d and the sum of the cubes of indivisual digits is %d.",b,sum);
    }
    return 0;
}
