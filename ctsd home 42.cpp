#include<stdio.h>
void getsum(int x,int y)
{
	int min,max;
	min=y^((x^y)&-(x<y));
	printf("the minimum number is=%d\n",min);
	max=x^((x^y)&-(x<y));
	printf("the maximum number is=%d\n",max);
}
int main()
{
	int x,y;
	printf("enter the numbers");
	scanf("%d %d",&x,&y);
	getsum(x,y);
	return 0;
}
