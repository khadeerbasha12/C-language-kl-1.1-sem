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
		if(i==n/2)
		{
			printf("%d ",a[i][j]);
		}
}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(j==n/2)
		{
			printf("%d",a[j][i]);
		}
}
	}

	return 0;
}
