#include<stdio.h>
int binary(int x[],int n,int a)
{
	int min,mid,max;
	min=0;
	max=n-1;
	while(min<=max)
	{
		mid=min+max/2;
		if(a==x[mid])
		return 1;
		else if(a<x[mid])
		max=mid-1;
		else if(a>x[mid])
		min=mid+1;
	}	
	return -1;
}
int main()
{
	int a[100],n,key,flag,i;
	printf("Enter number of array:");
	scanf("%d",&n);
	printf("\nEnter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("\nEnter key number:");
		scanf("%d",&key);
		flag=binary(a,n,key);
		if(flag==-1)
		printf("\nNOT FOUND");
		else
		printf("\nfound at:%d",flag);
}
