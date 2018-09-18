#include <stdio.h>
#include <stdlib.h>

 main()
{
    int num,n,j=0,div;
    printf("Enter any number:");
    scanf("%d",&num);
    for(n=1;n<=num;n++)
    {
        j=0;
        for(div=1;div<=n;div++)
        {
            if(n%div==0)
            {
              j++;
            }
        }
        if(j==2)
        {
         printf("%d\n",n);
        }
    }

}
