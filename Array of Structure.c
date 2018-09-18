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
	struct person p[2];
	int i;
	for(i=0;i<=1;i++)
	{
	printf("Enter the name of person:");
    scanf("%s",p[i].name);
	printf("Enter the age of person:");
	scanf("%d",&p[i].age);
	printf("Enter the weight of person:");
	scanf("%f",&p[i].weight);
	printf("\n");
	structure(&p[i]);

    }
  }
	void structure(struct person *P)
	{
	printf("Name of the person:%s\n",P->name);
	printf("Age of the person:%d\n",P->age);
	printf("Weight of the person:%f\n",P->weight);
    }
