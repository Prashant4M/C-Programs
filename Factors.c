#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    printf("\nEnter the number of which you want to factors\n");
    scanf("%d",&num);
    printf("Factos of the  given number are:\n");
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
          printf("\n%d",i);
        }
    }

    return 0;
}
