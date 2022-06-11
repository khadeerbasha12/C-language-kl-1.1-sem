#include<stdio.h>
int binary(int arr[100],int min,int max,int key)
{
	if(min>max)
	return -1;
	int mid=max+min/2;
	if(arr[mid]==key)
	return mid;
	else if(arr[mid]>key)
	binary(arr,min,mid-1,key);
	else if(arr[mid]<key)
	binary(arr,mid+1,max,key);
}
int main()
{
	int i,arr[100],key,n;
	printf("enter the key value");
	scanf("%d",&key);
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int s=binary(arr,0,n-1,key);
	if(s==(-1))
	printf("not found");
	else
	printf("%d is found at %d",key,s);
	return 0;
}
