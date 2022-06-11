#include<stdio.h>
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int n,s;
	printf("enter the number");
	scanf("%d",&n);
	s=fact(n);
	printf("%d",s);
	return 0;
}
