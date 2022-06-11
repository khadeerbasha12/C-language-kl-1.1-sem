#include<stdio.h>
int linear_search(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		return 1;
	}
	return 0;
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
		flag=linear_search(a,n,key);
		if(flag==1)
		printf("\nFOUND");
		else
		printf("not found");
		
	
}
