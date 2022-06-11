#include<stdio.h>
#include<string.h>
typedef struct employee
{
	int id;
	char name[30];
	int age;
}emp;
int main()
{
	emp e1;
	e1.id=436;
	strcpy(e1.name,"khadeer");
	e1.age=18;
	printf("%d %s %d",e1.id,e1.name,e1.age);
	return 0;
}
