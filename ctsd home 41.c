#include<stdio.h>
void getsum(int x,int y,int z)
{
	if(x>y&&x>z)
	printf("the greatest among three is=%d",x);
	else if(y>x&&y>z)
	printf("the greatest among three is=%d",y);
	else if(z>x&&z>y)
	printf("the greatest among three is=%d",z);
}
int main()
{
	int x,y,z;
	printf("enter three numbers");
	scanf("%d %d %d",&x,&y,&z);
	getsum(x,y,z);
	return 0;
}
