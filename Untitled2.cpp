#include<stdio.h>
void getsum(int x)
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(x>i||x<i)
		printf("%d * %d = %d\n",x,i,x*i);
	}
}
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	getsum(x);
	return 0;
}
