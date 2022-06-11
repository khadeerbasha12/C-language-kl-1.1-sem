#include<stdio.h>
void getsum(int x)
{
	int i;
	int lp=0,n=0;
	for(i=1;i<=x;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
		 lp++;
		}
		else
		n++;
	}
	printf("no.of leap years=%d\nno.of normal years=%d",lp,n);
}
int main()
{
	int x;
	printf("enter the year");
	scanf("%d",&x);
	getsum(x);
	return 0;
}
