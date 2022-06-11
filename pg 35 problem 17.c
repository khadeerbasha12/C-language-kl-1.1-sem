#include<stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else{
	int x =n%10;
	return x+sum(n/10);
	}
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int s=sum(n);
	int a=s%10;
	int b=s/10;
	int c=a+b;
	int d=c%10;
	int e=c/10;
	int f=d+e;
	printf("%d",f);
	return 0;
}
