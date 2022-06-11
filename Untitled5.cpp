#include<stdio.h>
static int add(int val)
{
	static int sum;
	sum+=val;
	return sum;
}
int main()
{
	int i;
	int n;
	n=10;
	for(i=0;i<10;i++)
	{
		printf("\n %d\n",add(i));
	}
	return 0;
}
