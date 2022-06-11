#include<stdio.h>
void getsum(int x[])
{
	int i,odd=1;
	for(i=0;i<4;i++)
	{
		x[i]%2!=0?odd=odd*x[i]:odd=odd*1;
	}
	printf("%d",odd);
}
int main()
{
	int i,x[100],y;
	printf("enter the array");
	for(i=0;i<4;i++)
	{
		scanf("%d",&x[i]);
	}
	getsum(x);
	return 0;
	
}
