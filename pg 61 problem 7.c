#include<stdio.h>
int print(int a,int x[30],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a==x[i])
		return i;
	}
	return -1;
}
int main()
{
	int x[30],n,a,i;
	printf("enter the number you want to search for");
	scanf("%d",&a);
	printf("enter the number of values you want to enter");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	int s=print(a,x,n);
	if(s==(-1))
	printf("not found");
	else
	printf("the index is=%d",print(a,x,n));
	return 0;
}
