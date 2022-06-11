#include<stdio.h>
void getsum(int x)
{
	int i;
	int sum=0;
	int p;
 while(x>0)
	{
		p=x%10;
		sum=sum+p;
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
