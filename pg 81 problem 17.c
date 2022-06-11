#include<stdio.h>
int print(int n,int x[100],int a)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(x[i]==a)
		return i;
	}
	return (-1);
}
int main()
{
	int n,i;
	printf("enter the size");
	scanf("%d",&n);
	int a;
	printf("enter the number you want to search for");
	scanf("%d",&a);
	int x[100];
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	int s=print(n,x,a);
	if(s==(-1))
	printf("not found");
	else
	printf("[ %d]",print(n,x,a));
	return 0;
}
