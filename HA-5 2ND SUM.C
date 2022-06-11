#include<stdio.h>
void getsum(int x[100],int n)
{
	int max,min,i;
	max=min=x[0];
	for(i=1;i<n;i++)
	{
		if(x[i]>max)
		max=x[i];
		if(x[i]<min)
		min=x[i];
	}
	int d=max-min;
	printf("the difference is=%d",d);
}
int main()
{
	int x[100],n,i;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	getsum(x,n);
	return 0;
}
