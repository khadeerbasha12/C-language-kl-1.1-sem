#include<stdio.h>
int reverse(int n)
{
	int x;
	if(n==0)
	return 0;
	else
	x=n%10;
	printf("%d",x);
	reverse(n/10);
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	printf("the reverse number is=");
	reverse(n);
	return 0;
}
