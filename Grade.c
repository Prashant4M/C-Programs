#include <stdio.h>
#include <stdlib.h>

int main()
{
  int physics,chemistry,math,hindi,english;
  float percentage;
  printf("Enter the marks for physics,chemistry,math,hindi,english\n");
  scanf("%d%d%d%d%d",&physics,&chemistry,&math,&hindi,&english);
  percentage=(physics+chemistry+math+hindi+english)/5;
  if (percentage>=90)
  {
      printf("The student got A grade.");
  }
  else if(percentage>=80)
  {
     printf("The student got B grade.");
  }
  else if(percentage>=70)
  {
      printf("The student got C grade.");
  }
  else if(percentage>=60)
  {
      printf("The student got D grade.");
  }
  else if(percentage>50)
  {
      printf("The student got E grade.");
  }
  else if (percentage>=40)
  {
      printf("The student got F grade.");
  }

}
