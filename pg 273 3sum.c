#include<stdio.h>
void gettable(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",n,i,i*n);
		
	}
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	gettable(n);
	return 0;
}
