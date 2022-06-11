#include<stdio.h>
int main()
{
	int a[10] [10];
	int r,c;
	int i,j;
	printf("enter the no.of rows");
	scanf("%d",&r);
	printf("enter the no.of coloumns");
	scanf("%d",&c);
	printf("enter elements");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	printf("the matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
