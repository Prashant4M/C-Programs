#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,i,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    a=n;
    while(n>0)
        {
            i=n%10;
            rev=rev*10+i;
            n/=10;
        }
         printf("The reverse of %d is %d",a,rev);
    return 0;
}
