#include<stdio.h>
int digits(int n)
{
	static int a=0;
	if(n==0)
	return 0;
	else
	{
	a++;
	digits(n/10);
	}
	return a;
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int s=digits(n);
	printf("%d",s);
	return 0;
}
