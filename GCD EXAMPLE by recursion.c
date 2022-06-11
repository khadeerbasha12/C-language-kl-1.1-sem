#include<stdio.h>
int sum(int x)
{
	int r;
	if(x==0)
	{
		return r;
	}
	else{
	int m=0;
	int n=1;
	int r=m+n;
	 m=n;
	 n=r;
	return sum(m);}  
}
int main()
{
	int m,s;
	printf("enter the numbers");
	scanf("%d",&m);
	s=sum(m);
	printf("%d",s);
	return 0;
}
