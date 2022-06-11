#include<stdio.h>
void getnum(int a,int b)
{
	int c;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swapped values are=%d %d",a,b);
}
int main()
{
	int a,b;
	printf("enter the values of a and b");
	scanf("%d %d",&a,&b);
	getnum(a,b);
	return 0;
}
