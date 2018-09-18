#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int num,div;
    printf("Enter the number to know its prime factors\n");
    scanf("%d",&num);
    printf("\nPrime factors of %d are:\n\n",num);
    div=2;
    while(num!=0)
    {
        if(num%div!=0)
        {
            div+=1;
        }
        else
        {
            num/=div;
            printf("\n%d",div);
            if(num==1)
                break;
        }
    }
    return 0;
}
