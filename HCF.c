#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,hcf,lcm;
    printf("Enter two numbers of which you want to find HCF\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        hcf=i;
    }
    lcm=a*b/hcf;
     printf("HCF of %d and %d is %d\n",a,b,hcf);
     printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
}
