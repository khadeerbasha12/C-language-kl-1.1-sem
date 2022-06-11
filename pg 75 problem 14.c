#include<stdio.h>
int sum(int n,int x[100])
{
	int i,sum=0;
	for(i=0;i<n;i++)
	sum=sum+x[i];
	return sum;
}
int main()
{
	int n;
	printf("enter the size");
	scanf("%d",&n);
	int x[100],i;
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	int s=sum(n,x);
	printf("the sum is=%d",s);
	return 0;
}
