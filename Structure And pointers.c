#include<stdio.h>
struct person 
{
	char name[40];
	int age;
	float weight;
};
void structure(struct person *P);
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
	structure(&p);
  }
	void structure(struct person *P)
	{
	printf("Name of the person:%s\n",P->name);
	printf("Age of the person:%d\n",P->age);
	printf("Weight of the person:%f",P->weight);
    }

