#include<stdio.h>
int swapnumbers(int x,int y)
{
	printf("\n the swapped numbers are=%d %d",y,x);
	return 0;
}
int main()
{
	int x,y;
	printf("\n enter the values of x and y");
	scanf("%d %d",&x,&y);
	swapnumbers(x,y);
	return 0;
}
