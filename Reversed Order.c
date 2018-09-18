#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter a  starting number\n");
    scanf("%d",&n);
    printf("The reversed order is:\n");
    i=n;
    while(i>=1)
    {
        printf("\n%d",i--);
    }
    return 0;
}
