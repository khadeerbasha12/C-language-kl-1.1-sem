#include<stdio.h>
void getsum(int x)
{
	int i,sum=0;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			sum=sum+i;
			printf("%d\n",i);
		}
	}
	if(sum==x)
	printf("yes");
	else
	printf("no");
	
}
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	getsum(x);
	return 0;
}
