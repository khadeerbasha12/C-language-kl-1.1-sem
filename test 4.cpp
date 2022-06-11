#include<stdio.h>
#include<string.h>
int main()
{
	struct student
{
	int id;
	char name[30];
	char br[30];
	int y;
	float f;
};
	struct student s[100];
	int n,i;
	printf("enter no.of students\n");
	scanf("%d",&n);
	printf("enter the information\n");
	for(i=0;i<n;i++)
	{
		printf("enter the %d person details\n",i+1);
		printf("enter the id");
		scanf("%d",&s[i].id);
		printf("enter the name");
		scanf("%s",&s[i].name);
		printf("enter the branch");
		scanf("%s",&s[i].br);
		printf("enter the year");
		scanf("%d",&s[i].y);
		printf("enter the fee");
		scanf("%f",&s[i].f);
	}
	int pass=0;
	int temp;
	char a[100];
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
		if(s[i].id>s[i+1].id)
		{
			temp=s[i].id;
			s[i].id=s[i+1].id;
			s[i+1].id=temp;
		}
			if(strcmp(s[i].name,s[i+1].name)>0)
			{
				strcpy(a,s[i].name);
				strcpy(s[i].name,s[i+1].name);
				strcpy(s[i+1].name,a);
			}
		if(strcmp(s[i].br,s[i+1].br)>0)
			{
				strcpy(a,s[i].br);
				strcpy(s[i].br,s[i+1].br);
				strcpy(s[i+1].br,a);
			}
		if(s[i].y>s[i+1].y)
		{
			temp=s[i].y;
			s[i].y=s[i+1].y;
			s[i+1].y=temp;}
		if(s[i].f>s[i+1].f)
		{
			temp=s[i].f;
			s[i].f=s[i+1].f;
			s[i+1].f=temp;}
		}
		
	}
	printf("the sorted oreder is\n");
		for(i=0;i<n;i++)
		printf("id=%d\tname=%s\tbranch=%s\tyear=%d\tfees=%f\n",s[i].id,s[i].name,s[i].br,s[i].y,s[i].f);
	return 0;
}
