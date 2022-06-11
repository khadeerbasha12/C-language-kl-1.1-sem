#include<stdio.h>
void print(int n)
{
	int f0=0,f1=1,f2,sum=0;
	while(n>0)
	{
		f2=f0+f1;
		printf("%d\n",f2);
		if(f2%2==0)
		{
			sum=sum+f2;
		}
		f0=f1;
		f1=f2;
		n--;
	}
	printf("the sum is=%d",sum);
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	print(n);
	return 0;
}
