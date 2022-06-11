#include<stdio.h>
void getsalary(int age,int nod,char sex)
{ int a;
	if(age>=18 && age<30&&sex=='m')
	{
	a=nod*700;
	printf("the salary=%d",a);
	}
	else if(age>=18&&age<30&&sex=='f')
	{
	a=nod*750;
	printf("the salary=%d",a);
	}
	else if(age>=30 && age<=40 && sex=='m')
	{
	a=nod*800;
	printf("the salary=%d",a);
	}
	else if(age>=30&&age<=40&&sex=='f')
	{
	a=nod*850;
	printf("the salary=%d",a);
	}
	
}
int main()
{
	int age;
	int nod;
	char sex;
	printf("enter the age");
	scanf("%d",&age);
	printf("no.of days worked");
	scanf("%d",&nod);
	printf("enter the gender");
	scanf(" %c",&sex);
	getsalary(age,nod,sex);
	return 0;
	
}
