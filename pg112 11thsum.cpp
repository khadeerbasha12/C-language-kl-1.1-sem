#include<stdio.h>
int getsum(unsigned long long int x)
{
	int x1,x2;
	int y1,y2;
	int res;
	y1=x%10;
	y2=(x%100)/10;
	x1=x/1000000000;
	x2=(x/100000000)%10;
	res=x1+x2+y1+y2;
	return res;
}
int main()
{
	unsigned long long int x;
	int ans;
	printf("\n enter the mobile number");
	scanf("%lld",&x);
	ans=getsum(x);
	printf("\n the sum of first two digits and last two digit is=%d",ans);
	return 0;
}
