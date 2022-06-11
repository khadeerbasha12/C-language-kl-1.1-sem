#include<stdio.h>
int digit(int n)
{
	static int x=0;
	if(n==0)
	return 0;
	else{
	x++;
	digit(n/10);}
	return x;
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int a=digit(n);
	printf("%d",a);
	return 0;
}
