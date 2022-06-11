#include<stdio.h>
int gcd(int m,int n)
{
	int r;
	if(m%n==0)
	{
		return n;
	}
	else
	r=m%n;
	 m=n;
	 n=r;
	return gcd(m,r);  
}
int main()
{
	int m,n,s;
	printf("enter the numbers");
	scanf("%d %d",&m,&n);
	s=gcd(m,n);
	printf("gcd is=%d",s);
	return 0;
}
