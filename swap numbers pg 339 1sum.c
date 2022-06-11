#include<stdio.h>
void getsum(int a,int b)
{
	a=a^b;
	b=b^a;
	a=a^b;
	printf("the swapped numbers are=%d %d",a,b);
}
int main()
{
	int a,b;
	printf("enter two numbers to be swapped");
	scanf("%d %d",&a,&b);
	getsum(a,b);
	return 0;
}
