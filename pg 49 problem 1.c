#include<stdio.h>
void print(int n)
{
	int x;
	if(n==0)
	printf("0");
	else
	scanf("%d",&x);
	printf("%d",x);
	print(n-1);
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	print(n);
	return 0;
}
