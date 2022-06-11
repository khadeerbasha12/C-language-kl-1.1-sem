#include<stdio.h>
int product(int m1,int m2,int m3,int m4)
{
	int a[4];
	m1=a[0]%2!=0?m1*a[0]:m1;
	m2=a[1]%2!=0?m2*a[1]:m2;
	m3=a[2]%2!=0?m3*a[2]:m3;
	m4=a[3]%2!=0?m4*a[3]:m4;
	return m4;
}
int main()
{
	int a[4],m1,m2,m3,m4,res;
	printf("\n Enter first odd number:");
	scanf("%d",&a[0]);
	printf("\n Enter second odd number:");
	scanf("%d",&a[1]);
	printf("\n Enter third odd number:");
	scanf("%d",&a[2]);
	printf("\n Enter fourth odd number:");
	scanf("%d",&a[3]);
	res=product(a[0],a[1],a[2],a[3]);
	printf("\n product is %d",res);
	return 0;
}
