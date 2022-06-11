#include<stdio.h>
void getnum(int n)
{
	if(n%2!=0)
	printf("weird");
	else if(n%2==0&&n<=5&&n>=2)
	printf("not weird");
	else if(n%2==0&&n<=20&&n>=6)
	printf("weird");
	else if(n%2==0&&n>20)
	printf("not weird");
	
}
int main()
{
	int n;
	printf("enter the value");
	scanf("%d",&n);
	getnum(n);
	return 0;
}
