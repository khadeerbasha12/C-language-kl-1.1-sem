#include<stdio.h>
int power(int m,int n)
{
	if(n==1)
	return m;
	else
	return m*power(m,n-1);
}
int main()
{
	int m,n;
	printf("enter the number");
	scanf("%d %d",&m,&n);
	int s=power(m,n);
	printf("the result is= %d",s);
	return 0;
}
