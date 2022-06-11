#include<stdio.h>
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	return 1;
	else
	{
	return fib(n-1)+fib(n-2);
	
	}
}
int main()
{
int n,res;
printf("\n enter the number:");
scanf("%d",&n);
res=fib(n);
printf("%d",res);
return 0;
}
