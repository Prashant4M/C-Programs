#include<stdio.h>
#include<stdlib.h>
struct person
{
	int age;
	char name[200];
};
void main()
{
	struct person *ptr;
	int n,i;
	printf("Enter the no. of persons:");
	scanf("%d",&n);
	ptr=(struct person *)malloc(n*sizeof(struct person));
	for(i=0;i<n;i++)
	{
		printf("Enter the details of person:\n");
		scanf("%s",&(ptr+i)->name);
		scanf("%d",&(ptr+i)->age);
	
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",(ptr+i)->name);
		printf("%d\n",(ptr+i)->age);
	}
	free(ptr);
}
