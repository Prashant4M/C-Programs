  #include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;
    printf("Enter the number of month b/w 1 to 12\n");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    {
        printf("The month is of 31 days");
    }
    else if(a==4||a==6||a==9||a==11)
    {
        printf("The month is of 30 days");
    }
    else
    {
        printf("The month is of february");
    }

}
