#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int sno;
	char name[20];
	fp=fopen("sec-1.txt","w");
	if(fp==NULL)
	{
		printf("file cannot be opened");
		exit(0);
	}
	printf("enter the student number");
	scanf("%d",&sno);
	printf("enter the student name");
	scanf(" %s",name);
	fprintf(fp,"%d\t%s\n",sno,name);
	fclose(fp);
	return 0;
}
