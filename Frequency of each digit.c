#include<stdio.h>
void main()
{
	long int i,j;
    int x,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,l=0;
	printf("Enter the number:");
	scanf("%ld",&i);
	j=i;
	while(i!=0)
	{
		x=i%10;
		switch(x)
		{
			case 0:
				a++;
				break;
		    case 1:
		    	b++;
		    	break;
		    case 2:
		    	c++;
		    	break;
		    case 3:
		    	d++;
		    	break;
		    case 4:
		    	e++;
		    	break;
		    case 5:
		    	f++;
		    	break;
		    case 6:
		    	g++;
		    	break;
		    case 7:
		    	h++;
		    	break;
		    case 8:
		    	k++;
		    	break;
		    case 9:
		    	l++;
		    	break;
		}
		i/=10;	
	}
	printf("0 occurs %d times.\n",a);	
	printf("1 occurs %d times.\n",b);	
	printf("2 occurs %d times.\n",c);	
	printf("3 occurs %d times.\n",d);	
	printf("4 occurs %d times.\n",e);	
	printf("5 occurs %d times.\n",f);		
    printf("6 occurs %d times.\n",g);	
    printf("7 occurs %d times.\n",h);	
    printf("8 occurs %d times.\n",k);	
    printf("9 occurs %d times.\n",l);	
}
