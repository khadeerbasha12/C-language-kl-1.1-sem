#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	int r,i;
	int sum=0;
	float avg;
	fp=fopen("res.txt","w");
	if(fp==NULL)
	{
		printf("file cannot be opened");
		exit(0);
	}
	printf("\n enter the resistances");
	for(i=0;i<10;i++)
	{
		scanf("%d",&r);
		fprintf(fp,"%d\n",r);
		sum=sum+r;
		}
		avg=sum/10.0;
		printf("the average is=%f",avg);
		fclose(fp);
		fp=fopen("res.txt","a");
		fprintf(fp,"the average is=%f",avg);
		return 0;
}

