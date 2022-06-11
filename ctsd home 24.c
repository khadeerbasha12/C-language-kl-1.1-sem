#include<stdio.h>
void add(int *px,int *py)
{
	int sum;
	sum=*px+*py;
	printf("the sum is=%d",sum);	
}
int main()
{
	int x,y;
	int *px,*py;
	printf("enter two numbers");
	scanf("%d %d",&x,&y);
	px=&x;
	py=&y;
	add(&x,&y);
	return 0;
}
