#include<stdio.h>
int getamount(int x,int a,int b)
{
	int c,d,res;
	c=100-x;
	d=b*c;
	res=d+a;
	return res;	
}
int main()
{
	int x,a,b;
	int ans;
	printf("\n enter the values of x, a and b");
	scanf("%d %d %d",&x,&a,&b);
	ans=getamount(x,a,b);
	printf("\n the maximum amount of sugar in grams=%d",ans);
	return 0;
}
