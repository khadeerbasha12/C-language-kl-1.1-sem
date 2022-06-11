#include<stdio.h>
void getsum(int *px,int *py)
{
	*px=*px+*py;
	*py=*px-*py;
	*px=*px-*py;
	printf("the swapped numbers are=%d  %d",*px,*py);
}
int main()
{
	int x,y;
	printf("enter two numbers to be swapped");
	scanf("%d %d",&x,&y);
	getsum(&x,&y);
	return 0;
}
