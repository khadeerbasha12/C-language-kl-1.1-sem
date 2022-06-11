#include<stdio.h>
int main()
{
	int i,j,k;
	int n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(k=0;k<n-1;k++)
		{
			if(j<=n-k)
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
