#include<stdio.h>
void getsquad(int x,int y)
{
	if(x>0&&y>0)
	printf("first quadrant");
	else if(x<0&&y>0)
	printf("second quadrant");
	else if(x<0&&y<0)
	printf("third quadrant");
	else if(x>0&&y<0)
	printf("fourth quadrant");
}
int main()
{
	int x,y;
	printf("enter the values of x and y");
	scanf("%d %d",&x,&y);
	getsquad(x,y);
	return 0;
}
