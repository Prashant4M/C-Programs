#include<stdio.h>
void main()
{
	FILE *fp;
	char name[50];
	int status;
	printf("Enter the file name:");
	gets(name);
	status=remove(name);
	if(status==0)
	{
		printf("File is deleted.");
	}
	else
	{
		printf("File does not exist.");
	}
}
