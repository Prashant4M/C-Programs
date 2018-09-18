#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c,i;
    long long int lcm;
    printf("Enter three numbers of which you want to find LCM\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    for(i=1;i<=a*b*c;i++)
    {
        if(i%a==0&&i%b==0&&i%c==0)
        {
            lcm=i;
            printf("LCM of %d, %d and %d is %d",a,b,c,lcm);
            getch();
        }
    }

}

