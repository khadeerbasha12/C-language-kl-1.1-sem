#include<stdio.h>
void getsum(float x[100])
{
	int n,i;
	float sum=0;
	float avg;
	printf("how many numbers you want to enter");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++){
	scanf("%f",&x[i]);
	sum=sum+x[i];
	}
	avg=sum/n;
	printf("the average is=%f",avg);
}
int main()
{
	float x[100];
	getsum(x);
	return 0;
}
