#include<stdio.h>
int main()
{
	int x,y;
	int *p1=&x;
	int *p2=&y;
	int sum;
	printf("\n x=%d and y=%d",x,y);
	printf("\n x=%d and y=%d",*p1,*p2);
	scanf("%d %d",x,y);
	//sum=x+y;
	sum=*p1+*p2;
	printf("\n the sum is:%d",sum);
	return 0;
}
