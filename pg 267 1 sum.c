#include<stdio.h>
void getprint(int n)
{
	int i;
	for(i=1;i<=n;i++)
	printf("%d\n",i);
}
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	getprint(n);
	return 0;
	
}
