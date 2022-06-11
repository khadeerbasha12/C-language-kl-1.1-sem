#include<stdio.h>
void getsum(int n,int x[],int y[])
{
	int sum=0,sum1=0,i;
	for(i=0;i<n;i++)
	{
	sum=sum+x[i];
	sum1=sum1+y[i];
	}
	if(sum==sum1)
	printf("draw");
	else if(sum>sum1)
	printf("arwin wins");
	else if(sum<sum1)
	printf("suhas wins");
}
int main()
{
	int n,x[100],y[100],i;
	printf("enter the no.of subjects");
	scanf("%d",&n);
	printf("enter the marks");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("enter the marks");
	for(i=0;i<n;i++)
	scanf("%d",&y[i]);
	getsum(n,x,y);
	return 0;
}
