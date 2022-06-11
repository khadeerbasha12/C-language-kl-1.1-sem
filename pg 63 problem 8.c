#include<stdio.h>
#include<stdlib.h>
int print(int a,int x[30],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a==x[i]){
		return i;
		exit(0);}
	}
	return -1;
}
int main()
{
	int a,x[30],n,i;
	printf("enter the value you want to search for");
	scanf("%d",&a);
	printf("enter the no.of values you want to enter");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	int s=print(a,x,n);
	if(s==(-1))
	printf("not found");
	else
	printf("the index is=%d",s);
	return 0;
}
