#include<stdio.h>
#include<stdlib.h>
void display(char [],unsigned long int,char,char[],unsigned long long int,float);
void display(char name[],unsigned long int rno,char gender,char dept[],unsigned long long int mob,float cgpa)
{
	printf("\n name=%s",name);
	rno=rno%100000;
	printf("\n id number=%ld",rno);
	printf("\n gender=%c",gender);
	printf("\n department=%s",dept);
	printf("\n phone number=%lld",mob);
	printf("\n c.g.p.a=%f",cgpa);
}
int main()
{
	char name[50];
	unsigned long int rno;
	char gender;
	char dept[20];
	unsigned long long int mob;
	float cgpa;
    printf("\n enter the name");
	scanf("%[^\n]s",name);
	fflush(stdin);//clearimg the buffer	
	printf("\n enter the ID NUMBER");
	scanf("%d",&rno);
	printf("\n enter gender");
	scanf(" %c",&gender);
	fflush(stdin);
	printf("\n enter the department");
	scanf("%[^\n]s",&dept);
	printf("\n enter the moblie number");
	scanf("%lld",&mob);
	printf("\n enter CGPA");
	scanf("%f",&cgpa);
	display(name,rno,gender,dept,mob,cgpa);
	return 0;
}
