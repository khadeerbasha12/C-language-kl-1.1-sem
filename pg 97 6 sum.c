#include<stdio.h>
void getsum(int x[10])
{
	int i;
	int sum=0;
	printf("enter the ten values\n");
	for(i=0;i<10;i++)
	{
		scanf("%d ",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+x[i];
	}
	printf("the total resistance is=%d",sum);
}
int main()
{
	int x[10];
	getsum(x);
	return 0;
}
