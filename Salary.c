#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary;
    float Netsalary;
    printf("Salary of the employee=");
    scanf("%d",&salary);
    if(salary<=10000)
    {
      Netsalary=salary+(salary*20)/100+(salary*85)/100;
      printf("Gross salary of the employee is=%f",Netsalary);
    }
    else if(salary<=20000)
    {
        Netsalary=salary+(salary*25)/100+(salary*90)/100;
        printf("Gross salary of the employee is=%f",Netsalary);
    }
    else
    {
        Netsalary=salary+(salary*30)/100+(salary*95)/100;
        printf("Gross salary of the employee is=%f",Netsalary);
    }
    return 0;
}
