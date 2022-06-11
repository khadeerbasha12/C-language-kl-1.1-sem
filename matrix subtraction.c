#include<stdio.h>
void matrixsub(int a[10][10],int b[10][10],int r,int c)
{
	int i,j;
	int res[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("the resultant matrix is=\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d ",res[i][j]);
		printf("\n");
	}
	
}
int main()
{
	int a[10][10];
	int b[10][10];
	int r,c;
	int i,j;
	printf("enter the no.of rows");
	scanf("%d",&r);
	printf("enter the no.of coloumns");
	scanf("%d",&c);
	printf("enter 1st matrix elements");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	printf("enter 2nd matrix");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&b[i][j]);
	printf("the 1st matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("the second matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	matrixsub(a,b,r,c);
	
	return 0;
} 
