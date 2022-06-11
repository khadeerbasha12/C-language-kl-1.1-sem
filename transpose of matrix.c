#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n;
	int i,j;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns:");
	scanf("%d",&n);
	printf("\n Enter elements into matrix:");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("\nMatrix in\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n transpose matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[j][i]);
		printf("\n");
		
	}
	return 0;
}
