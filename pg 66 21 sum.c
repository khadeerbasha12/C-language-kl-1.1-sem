#include<stdio.h>
int getnumber(int x)
{
	int a,b,c;
	int res;
	if (x>0)
	a=1000;
	if (x<0)
	b=-200;
	res=a+b+c;
	printf("\n the total points are=%d",res);
	return 0;
}
int main()
{
	int x;
	printf("\n enter the value of x");
	scanf("%d",&x);
	getnumber(x);
	return 0;
}
