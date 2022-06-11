#include<stdio.h>
int getsum(int x)
{
	int x1,x2,x3;
	int res;
	x1=x/100;
	x2=(x/10)%10;
	x3=x%10;
	res=x1+x2+x3;
	return res;
}
int main()
{
	int x,ans;
	printf("\n enter the three digit number");
	scanf("%d",&x);
	ans=getsum(x);
	printf("\n the sum of the digits is=%d",ans);
	return 0;
}
