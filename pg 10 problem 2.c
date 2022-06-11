#include<stdio.h>
int sum_natural(int n)
{
	if(n==0)
	return 0;
	else
	return n+sum_natural(n-1);
}
int main()
{
	int n,s;
	printf("enter the number");
	scanf("%d",&n);
	s=sum_natural(n);
	printf("%d",s);
	return 0;
}
