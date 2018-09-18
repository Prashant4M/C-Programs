 #include <stdio.h>

 main()
{
    int a,b,c;
    printf("Enter the angles of the triangle\n ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("Triangle is possible\n");
    }
    else

    {
       printf("Triangle is not possible\n");

    }
    if( a+b+c==180&&a==b==c)
    {
        printf("Triangle is equilateral");
    }
    else if(a+b+c==180&&a==b||b==c||c==a)
     {
         printf("Triangle is isosceles");
     }
    else if(a+b+c==180&&a!=b!=c)
     {
         printf("Triangle is scalene");
     }

}


