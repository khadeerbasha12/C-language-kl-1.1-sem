#include<stdio.h>
void print(int n)
{
	int x;
	if(n==1)
	printf(" 1");
	else{
			printf(" %d",n);
	print(n-1);}
}
int main()
{
	int n,s;
	printf("enter the number");
	scanf("%d",&n);
	print(n);
	return 0;
}
