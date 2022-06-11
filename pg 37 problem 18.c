#include<stdio.h>
int multiply(int m,int n)
{
	if(n==0)
	return 0;
	else
	return m+multiply(m,n-1);
}
int main()
{
	int m,n;
	printf("enter the number");
	scanf("%d %d",&m,&n);
	int s=multiply(m,n);
	printf("%d",s);
	return 0;
}
