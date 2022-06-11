#include<stdio.h>
typedef struct 
{
int id;
char name[50];
int age;
float height;
}student;
student s[100];
int main()
{
	int n,i;
	printf("enter the no.of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the id no.");
		scanf("%d",&s[i].id);
		printf("enter the name");
		scanf("%s",&s[i].name);
		printf("enter the age");
		scanf("%d",&s[i].age);
		printf("enter the height");
		scanf("%f",&s[i].height);
	}
	printf("id no.\t\tname\t\tage\t\theight\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t\t%s\t\t%d\t%f\t\t\n",s[i].id,s[i].name,s[i].age,s[i].height);
		}
	return 0;
}
