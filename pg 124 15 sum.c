#include<stdio.h>
void getsum(int x[100])
{
	int i,odd=1,sum=0,n;
	printf("enter the no.of numbers you want to enter=");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
	(x[i]%2)!=0?(odd=odd*x[i]):(odd=odd*1);
	}
	printf("product is=%d",odd);
}
int main()
{
	int x[100];
	getsum(x);
	return 0;
}
