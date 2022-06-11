#include<stdio.h>
void getsum(int x,int y)
{
 
	x=x+y;
	y=x-y;
	x=x-y;
	printf("the swapped number are=%d %d",x,y);
}
int main()
{
	int x,y;
	printf("enter two numbers");
	scanf("%d %d",&x,&y);
	getsum(x,y);
	return 0;
}
