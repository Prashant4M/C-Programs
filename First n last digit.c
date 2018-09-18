#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,i;
    printf("Enter the number:");
    scanf("%d",&n);
    j=n;
    while(n>=10)
    {
        n/=10;
    }
    printf("The first digit of %d is %d\n",j,n);
    i=j%10;
    printf("The last digit of %d is %d",j,i);
    return 0;
}

