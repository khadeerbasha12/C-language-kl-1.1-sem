#include<stdio.h>
void getsum(int arr[],int pos,int n)
{
	int i;
	for(i=pos;i<n;i++)
	arr[i]=arr[i-1];
	printf("the array is=");
	for(i=0;i<n-1;i++)
	printf("%d",arr[i]);
}
int main()
{
	int pos,i,arr[100],n;
	printf("enter the sizeof the array");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the position");
	scanf("%d",&pos);
	getsum(arr,pos,n);
	return 0;
}
