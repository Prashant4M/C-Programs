#include <stdio.h>


int main()
{
   int x,y,counter=0;
   printf("Enter the number to check whether it is a prime number or not\n");
   scanf("%d",&x);
   for(y=1;y<=x;y++)
   {
       if(x%y==0)
       {
           counter++;
       }
   }
    if(counter==2)
    {
        printf("The given number %d is a prime number",x);
    }
    else
    {
        printf("The given number %d is not a prime number\n because The number is divisible by \n",x);
        for(y=1;y<=x;y++)
        {
            if(x%y==0)
            {
                printf("%d\n",y);
            }
        }
    }
    return 0;

}
