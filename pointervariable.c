#include<stdio.h>
int main()
{
	int x=10,y=15;
	int *p1=&x;
	int *p2=&y;
	int sum;
	printf("\n x=%d and y=%d",x,y);
	printf("\n x=%d and y=%d",*p1,*p2);
	//sum=x+y;
	sum=*p1+*p2;
	printf("\n the sum is:%d",sum);
	return 0;
}
