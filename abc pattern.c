#include<stdio.h>
void print(int n)
{
	int i,j;
	int x=65;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c",x+j-1);
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
