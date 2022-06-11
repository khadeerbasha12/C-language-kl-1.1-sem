#include<stdio.h>
int main()
{
	struct employee
{
	int id;
	char name[30];
	char des[30];
	float sal;
};
	struct employee e[100];
	int n,i;
	printf("enter no.of employee\n");
	scanf("%d",&n);
	printf("enter the information\n");
	for(i=0;i<n;i++)
	{
		printf("enter the %d person details\n",i+1);
		printf("enter the id");
		scanf("%d",&e[i].id);
		printf("enter the name");
		scanf("%s",&e[i].name);
		printf("enter the designation");
		scanf("%s",&e[i].des);
		printf("enter the salary");
		scanf("%f",&e[i].sal);
	}
	printf("id. no\t\t name\t\tdesignation\t\tsalary\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%s\t\t%s\t\t\t%f\n",e[i].id,e[i].name,e[i].des,e[i].sal);
	}
	return 0;
}
