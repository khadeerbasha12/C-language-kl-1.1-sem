#include<stdio.h>
void print(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		printf("*"); 
		printf("\n");
     	
	}
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	print(n);
	return 0;
}
