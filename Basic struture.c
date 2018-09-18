#include<stdio.h>
struct person 
{
	char name[40];
	int age;
	float weight;
};
void main()
{
	struct person p;
	printf("Enter the name of person:");
    gets(p.name);
	printf("Enter the age of person:");
	scanf("%d",&p.age);
	printf("Enter the weight of person:");
	scanf("%f",&p.weight);
	printf("\n");
	printf("\n");
	printf("Name of the person:%s\n",p.name);
	printf("Age of the person:%d\n",p.age);
	printf("Weight of the person:%f",p.weight);
}
