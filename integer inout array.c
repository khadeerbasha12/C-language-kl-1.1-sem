#include<stdio.h>
int main()
{
	int age[100];
	int n,i,sum=0;      float avg;
	int *p;
	p=age;
	printf("enter the no.of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the age");
		scanf("%d",&age[i]);
	}
	printf("the age of students");
	for(i=0;i<n;i++)
	printf("%d  ",age[i]);
	for(i=0;i<n;i++){
	sum=sum+*p;
	p++; }
	avg=(float)sum/n;
	printf("\navg of age of students=%f",avg);
	return 0;
}
