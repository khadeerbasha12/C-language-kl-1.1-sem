#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x[10][10],y[10][10],res[10][10];
	int r1,c1,r2,c2;
	int i,j,k;
	printf("enter no.of rows of first matrix");
	scanf("%d",&r1);
		printf("enter no.of coloumns of first matrix");
	scanf("%d",&c1);
		printf("enter no.of rows of second matrix");
	scanf("%d",&r2);
		printf("enter no.of coloumns of second matrix");
	scanf("%d",&c2);
	if(c1!=r2){
	printf("matrix multiplication not possible");
	exit(0);}
	else{
	printf("enter the first matrix");
	for(i=0;i<r1;i++)
	for(j=0;j<c1;j++)
	scanf("%d",&x[i][j]);
	printf("enter second matrix");
	for(i=0;i<r2;i++)
	for(j=0;j<c2;j++)
	scanf("%d",&y[i][j]);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			res[i][j]=0;
			for(k=0;k<c1;k++)
			res[i][j]=res[i][j]+x[i][k]*y[k][j];
			
		}	
	}
	printf("first matrix is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
		printf("second matrix is\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}	
	printf("resultant matrix is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
  }
	return 0;
	
}
