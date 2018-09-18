#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    if(x%5==0||x%11==0)
    {
        printf("Number is divisible by 5 or 11");
    }
    else
    {
        printf("Number is not divisible by 5 or 11");
    }



}
