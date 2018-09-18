#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    long long int j=0;
    printf("Enter a number\n");
    scanf("%d",&i);
    while(i!=0)
    {
        i/=10;
        j++;
    }
      printf("Number of digits in that number=%u",j);
    getch();
}
