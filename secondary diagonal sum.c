#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n;
	int sum=0,sum1=0;
	int i,j;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns:");
	scanf("%d",&n);
	printf("\n Enter elements into matrix:");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("\nMatrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==j)
		{
		sum=sum+a[i][j];
		}
		if(j==n-1-i)
		{
		sum1=sum1+a[i][j];}
	}
	}
	printf("the sum of principal diagonal is=%d\n",sum);
	printf("the sum of secondary diagonal is=%d\n",sum1);
	printf("the difference between two diagonal is=%d",sum-sum1);
	return 0;
}
