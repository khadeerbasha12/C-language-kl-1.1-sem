#include<stdio.h>
void print(int n)
{
	int i,j;
	int x=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d%d ",j,j);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	print(n);
	print(n);
	return 0;
}
