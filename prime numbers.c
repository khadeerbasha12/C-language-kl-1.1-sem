#include<stdio.h>
void print(int n)
{
	int i,fc;
	int j;
	for(i=2;i<=n;i++)
	{
		fc=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			fc++;
		}
		if(fc!=0)
		continue;
		printf("\n%d",i);
	}
}
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	print(n);
	return 0;
}
