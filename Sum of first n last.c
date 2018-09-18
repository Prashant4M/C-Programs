#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,i,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    j=n;
    while(n>=10)
    {
        n/=10;
    }
    i=j%10;
    sum=i+n;
    printf("Sum of first and last digit=%d",sum);
    return 0;
}
