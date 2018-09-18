#include<stdio.h>
struct student
{
	char name[30],address[100],father[100],mother[50],email[40];
	int roll_no,mobile_no,age;
};
void printing(struct student *s);
void main()
{
	struct student s;
	printf("Enter the name of student:");
	gets(s.name);
	printf("Enter Roll no.:");
	scanf("%d",&s.roll_no);
	printf("Enter age of student:");
	scanf("%d",&s.age);-
	printf("Enter the father's name:");
	scanf("%s",&s.father);
	printf("Enter the mother's name:");
	scanf("%s",&s.mother);
	printf("Enter the address:");
	scanf("%s",&s.address);
	printf("Enter the mobile no. of student:");
	scanf("%d",&s.mobile_no);
	printf("Enter the E-Mail of student:");
    scanf("%s",&s.email);
	printing(&s);
}
void printing(struct student *s)
{
	printf("Name of student:%s\n",s->name);
	printf("Roll no. of student:%d\n",s->roll_no);
	printf("Age of student:%d\n",s->age);
	printf("Father's name:%s\n",s->father);
	printf("Mother's name:%s\n",s->mother);
	printf("Address of student:%s\n",s->address);
	printf("Mobile no. of student:%d\n",s->mobile_no);
	printf("Email of student:%s\n",s->email);
}
