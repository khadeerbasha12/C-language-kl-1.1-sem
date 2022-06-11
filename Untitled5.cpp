#include<stdio.h>
void getsum(int x)
{
	int sum=0;
	while(x!=0)
	{
		int a=x%10;
		sum=sum+a;
		x=x/10;
	}
	printf("%d",sum);
}
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	getsum(x);
	return 0;
}
